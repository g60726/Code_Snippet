<?php
//using date time 
//by default, the datetime() will be ran at the server or local machine timezone
try{
  date_default_timezone_set("America/Toronto"); // This is required to run script locally on CLI 

  $current = new DateTime(); 
  //without any parameters, it will default it to now

  $future = new DateTime("2014-08-28");
  // create a DateTime object at a specific time 
 
  //print out the timestamp string
  echo $current->format('Y-m-d H:i:s') . "\n";
  echo $future->format("Y-m-d H:i:s") . "\n"; 
  
  //Add time interval to it. When you call the method of a datetime obj, it mutate it instead of making a copy. So it is a void method
  //However, to add an appropriate amount of time, you need to pass it a DateInterval object. 
  // 'PT30S' -> 30 seconds
  // 'PT4D3M50S' -> 4 day 3 minutes 50 seconds
  // 'PT70S' -> 1 minute 10 seconds 

  $future->add(new DateInterval('PT30S'));
  echo $future->format("Y-m-d / H-i-s") . "\n";  

  //time() will produce the sametime since it is the number of seconds after 1970-01-01 00:00:00 UTC 
  echo time() . "\n"; 
}


catch(Exception $e){
  echo $e->getMessage();
}

?> 
