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
	$_[0] * $_[1];  #first argument multiply to the second argument 
}

<<<<<<< HEAD
print &multiply(2,6) . "\n";

=======
print &multiply(2,6) . "\n";
>>>>>>> add_perl
