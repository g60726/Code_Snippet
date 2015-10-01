//create an empty object
var foo = {};
foo.add = function(x){
	return 2*x;
}
console.log(foo.add(3));

//custom "class"
//in java script, the class is defined by a function
var Person = function(first_name){
	//this is the constructor
	this.first_name = first_name;
};

var P1 = new Person("Ken");
var P2 = new Person("Lomis");

console.log(P1.first_name);

//using prototype to add "class" method
Person.prototype.hello = function(){
	console.log("Hi " + this.first_name);
};

console.log(typeof Person);
P1.hello();

//Inhertance in JS 
function Student(firstname, subject){
	Person.call(this,firstname);
	this.subject = subject;
}

Student.prototype = Object.create(Person.prototype); //This Object.create is copying the prototype of Person into Student, so when you change the prototype of Student it will not touch Person
P3 = new Student("Kevin","Math");
console.log(P3.first_name);
P3.hello();

Student.prototype.hey = function(){
	console.log("Hey " + this.first_name);
}

console.log(P3 instanceof Student);
console.log(P3 instanceof Person);

console.log("--------creating private variable--------");
//Creating private variable
Parent = function(name,age){
	var name;
	var age;
	return {
		get_name : function(){
			return name;
		},
		get_age : function(){
			return age;
		}
	};
}("Winnie",40);

function Product(name,price){
	var name = name;
	var price = price;
	return {
		get_name : function(){
			return name;
		},
		get_price : function(){
			return price;
		}
	}
}
prod1 = Product("pen",30);
console.log(prod1.name); //undefined
console.log(prod1.get_name()); //pen 


