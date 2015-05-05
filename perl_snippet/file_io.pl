#this code illustrate file manipulation 
use strict; 
my $open_success = open my $log, ">", "file_io.txt";
my $open_success = 1;
if($open_success){
	print $log "new entry\n";  #enter new entry 
	close $log; #close this channel before openning a different kind to the same file 
	open my $r_log, "<", "file_io.txt";
	my $line = <$r_log>;
	print "output from file: \n";
	print $line;
}
else{
	print "The file couldn't be opened. \n";
} 

#you cant read & write to the same file on the same script,