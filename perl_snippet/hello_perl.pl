#The types of variables

print "Hello\n"; #Double quotes string literal
print 'Hello\n'; #Single quote string literal, in this case the \n doesn't change to newline character 
print "\n";
print 5 + 2; #Integer
print "\n";
print 5.2 + 2.1; # float 
print "\n";

#Using Variables
#scalar variable
my $num = 11;
print $num;

#interpolation of $food 
my $food = "pork";
print "\nI ate $food today.\n";

#creating character using Code point
print chr(0x05D0); 
print "\n";
#numeric comparator is more or less the same
# > < == <= >= !=

#Perl has its set of string comparator  
#  eq = equal
#  ne = not equal 
#  lt = less than
#  gt = greater than
#  le = less than or equal to
#  ge = greater than or equal to

print 'ken' eq 'ken'; #will print 1 which is true 

#say, just like print, but implicilty append a newline character
say "Hello World";

