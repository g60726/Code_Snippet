#this is a tutorial about hash 

#different way of initiating a hash

#initiation #1
$h1{'i1'} = '1';
$h1{'i2'} = '2';
print $h1{'i1'}."\n";

#initiation #2
%h2 = ("ken",2,"lomis",3);
print $h2{"ken"}."\n";

#initiation #3 
my %hash_exp = (
		"sweet" => "apple",
		"sour"=>"yogurt",
	);

print $hash_exp{'sweet'}."\n";

#hash methods

%h3 = reverse %h2; #it will only work if %h2 is one-to-one 

#hash function

#keys return a list of all keys, values return a list of all values 
my @k = keys %hash_exp;
my @v = values %hash_exp;

#loop through a hash using the each 
while(($key, $value) = each %hash_exp){
	print $key."\n";
	print $value."\n";
}

#exists function 
if (exists $hash_exp{"gg"}){
	#exists return true if gg exists in the hash %hash_exp 
}

#delete function remove the given key, and corresponding value from the hash 
delete $h2{"ken"}; 


# The %ENV hash stores the environment of the perl program
print $ENV{PATH}."\n";