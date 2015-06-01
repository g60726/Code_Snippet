# <STDIN> will read the next complete line from standard input (up to the first newline character)and use that string as the value of <STDIN> 
$line = <STDIN>;
print $line; # print what you enter before you press ENTER 	

#using chomp to remove the trailing newline character, however it only remove one newline character 
print "used chomp\n";
chomp($line);
print $line."end"; #there is no space between the user entered and 'end'

