#defining & using subroutine 
$glb_num = 3; #defining a global variable 

#defining a subroutine
sub print_num{
	$count = 0; #another global variable 
	while($count < 10){
		print $glb_num . "\n";
		$count++;
	}
}

#invoke it
&print_num; 
print $count."\n"; # it will print out 10 

#--------------------------------------------------------------

#subroutine with return value

#the last calculation performed will be treated as return value
$num1 = 10;
$num2 = 11;
sub sum_two_num {
	$num1 + $num2;
}
$sum = &sum_two_num;
print $sum."\n";

#--------------------------------------------------------------

#subroutine with argument, when you invoke subroutine with arguments, Perl will pass
#the list to the subroutine, store in @_ array to access the first arugment, use $_[0]

sub multiply{
	#check if the parameter num is correct
	if(@_ != 2){ 
		print "Please Pass in two numbers\n";
	}
	else{
		$_[0] * $_[1];  #first argument multiply to the second argument 
	}
}

#--------------------------------------------------------------

# use strict or use warning at the top to turn on warning during compilation time 

#write a subrountine that finds the sum of array, if the array is less than 4 elements, return -1

sub sum_of_array {
  if(@_ < 4){
  	print "Please Enter more than 4 elements\n";
    return -1;  
  }

  else{
  	$sum = 0; 
  	foreach(@_){
      $sum += $_;
  	}
  	$sum;
  }
}

print "\nTesting sum_of_array\n";
@arr1 = (1,2,3,4,5);
print &sum_of_array(@arr1)."\n";

#----------------------------------------------------------------

#if you use strict, if you declare global variable within a function, you will encounter a compilation error
# if you want to persist and local declare as state 
use 5.010;  #this feature is only avialable at this version 
sub use_state{
	state $n = 0;
	$n += 1;
	print "\nusing state: $n\n";
}

foreach(1..3){
	&use_state;
}




