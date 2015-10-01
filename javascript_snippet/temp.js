
var hero = {
   name: 'John Doe',
   getSecretIdentity: function (){
       return this.name;
   }
};

var stoleSecretIdentity = hero.getSecretIdentity;

console.log(stoleSecretIdentity());
console.log(hero.getSecretIdentity());
