<?php

// A sample class

class element{
 
   private $name

   public __construct($name){
	$this->name = $name	
   }

   public get_name(){
        echo $this->name;
   }
}



//factory class, a factory is a object that is used to generate another object

class Factory {

	// It contains a private constructor so it cant be instant 
	private __construct(){}

	// It then has the factory method that generate object

	public static generate($name){
		return new element($name);  
	}
}
