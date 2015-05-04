#this perl file teaches how to handle standard io 

$line = <STDIN>; #add the line entered on terminal 

# useful trick to read every line before EOF
while(define($line = <STDIN>)){
	#do something;
}

#the diamond operator <> 
# if you run perl stdio.pl file1, it will will read the file1 and load line by line into $line
while(define($line = <>)){
   #do something 
}

# the @ARGV stores the arguments you pass when running on the terminal
$first_param = @ARGV['0'];

#printing to standard io using format string printf 

$user = "Ken";
$day = 12;
printf ("Hey %s, your password will expire in %d day.\n", $user, $day);


#file handle 
#filehandler is the channnel that tells perl to connect to the outside world 
# use open <name of file handler> , <direction>, <file name>
my $success = open CONF, "<", "test.txt";
if(!$success){
	# file fail to open 
}

#close connection
close CONF;

