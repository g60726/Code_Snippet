#using loop

#while loop 
$count = 0;
while($count < 10){
	$count += 1;
	print "The count is: $count \n";
}

#concept of undef, a variable no need to declared before it is used, if it is used as number, then it is assumed to be 0
# else if it is used as string it is assumed as empty string 
# to check if a variable is defined, use defined(), <STDIN> operator will return undef if it hits the end-of-file 
if(defined($name)){
	print "the variable is defined\n";
}
else{
	print "the variable is not defined\n";
}

#foreach 
@words = qw(ken liao is awesome);
foreach $word (@words){
	print $word . "\n";
}

#Using Perl default variable $_ , when no variable name is used, Perl automatically assign it to $_
foreach (1..100){
	print "Using default variable to count $_\n";
}

$_ = "WOW";
print;

