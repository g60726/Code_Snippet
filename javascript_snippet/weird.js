Number.prototype.foo = function(y){
	return y*y;
};

function dumpy(){
	return 1;
}

dumpy.prototype.foo2 = function(){
	return 2
}

//console.log(dumpy.foo(3));
console.log((3).foo(3));
console.log(dumpy.prototype);

function foo3(){
	this.status = 3;
}

dumpy.prototype = new foo3();
console.log(dumpy.prototype);

console.log("------------inheritance------------------");
//Inheritance 
function Parent(name,age){
	this.name = name;
	this.age = age;
};

Parent.prototype.get_age = function(){
	return this.age;
};

P = new Parent("Winnie",40)
console.log(P.name);
console.log(P.age);

function Child(name,age){
	Parent.call(this,name,age);
	//This is equivalent to the following : 
	//this.name = name;
	//this.age = age;
};

Child.prototype = Object.create(Parent.prototype);
Child.prototype.toy = function(){
	return "LEGO";
};
C = new Child("Ken",20);
console.log(C.name);
console.log(C.age);
console.log(C.get_age());
console.log(Child.prototype);

//Inheritance of Inheritance 
function Grandchild(name,age){
	Child.call(this,name,age);
};
Grandchild.prototype = Object.create(Child.prototype);
G = new Grandchild("GG",1);
console.log(G.get_age());

//Use of that
function cons(x,y){
	this.x = x;
	this.y = y;
	this.k = function(){
		console.log("Hi" + this.x);
	}
}

dummy = new cons(1,1);
dummy.k();





