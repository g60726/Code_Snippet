<?php
//throw default exception 
try{
	$num = $argv['1'];
	if($num > 10){
		throw new Exception("You have entered a number bigger than 10\n");
	}
	else{
		echo $num."\n";
	}
}
catch(Exception $e){
	echo $e->getMessage();
}

//throwing multiple default exceptions
try{
	$num1 = $argv['1'];
	$num2 = $argv['2'];
	if($num1 > 10){
		throw new Exception("Number 1 exceeds 10\n");
	}
	if($num2 > 10){
		throw new Exception("Number 2 exceeds 10\n");
	}

	echo $num1 + $num2;
	echo "\n";
}
catch(Exception $e){
	echo $e->getMessage();
}

//throwing customize exceptions
class exceed_range_exception extends Exception {
	public function errorMessage(){
		$msg = $this->getMessage();
		return "In Ken's new exception: $msg exceeds 10\n";
	}
}

try{
	$num1 = $argv['1'];
	$num2 = $argv['2'];
	if($num1 > 10){
		throw new exceed_range_exception(1);
	}
	if($num2 > 10){
		throw new exceed_range_exception(2);
	}
	echo ($num1 + $num2)."\n";
}
catch(exceed_range_exception $e){
	echo $e->errorMessage();
}

// multiple catch 
class exceed_range_exception extends Exception {
	public function errorMessage(){
		$msg = $this->getMessage();
		return "In Ken's new exception: $msg exceeds 10\n";
	}
}

class not_an_integer extends Exception{
	public function warning_msg(){
		$msg = $this->getMessage();
		return "This $msg is not an integer\n";
	}
}

try{
	$para1 = $argv['1'];
	if(is_numeric($para1)){
		if($para1 > 10){
			throw new exceed_range_exception($para1);
		}
		else{
			echo $para1."\n";
		}
	}
	else{
		throw new not_an_integer($para1);
	}
}
catch(exceed_range_exception $e){
	echo $e->errorMessage();
}
catch(not_an_integer $e){
	echo $e->warning_msg();
}

//set up a high level exception handler
function top_level_exp_handler($exception){
	echo "Uncaught Exception:" . $exception->getMessage()."\n";
}

set_exception_handler("top_level_exp_handler");

throw new Exception("GG");
?>