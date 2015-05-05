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

