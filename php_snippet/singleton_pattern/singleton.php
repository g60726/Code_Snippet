<?php
//This file shows the template of a singleton pattern 

class Singleton{
	//private constructor so it cant be instantize 
	private __construct(){}

	//a generator that makes sure only one instance is alive 
        public static generate(){
		static $inst;
		if($inst === null){
			$inst = new Singleton();
		}
		return $inst;
	}
}
//once Singleton is instance, then the $inst static variable will not be null, then it will return the old instance
