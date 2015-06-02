<?php
//This file test that class def starts with upper, however, when you instance it, you can put lowecase
class Example{
	private $num;
	
	public function __construct($num){
		$this->num = $num;
	}
	
	public function print_num(){
		echo $this->num;
	}	
}
/* This will trigger an error because this actually conflicts Example

class eXample{
        private $num;
   
        public function __construct($num){
               $this->num = $numi * 2;
        }
   
        public function print_num(){
                echo $this->num;
        }

}
*/


$obj = new eXample(2);
$obj->print_num();
echo "\n";

