1 . the concept of namespace is denote the class methods belong to certain namespace. So ex, you can create a class that has the same name as cout, however, it will 
create an error. So using std::cout to qualify the core library is necessary in this case. In STL, evey method has to be accessed under the namespace std.

2. Only pointer can be assigned to NULL; 

3. No this in C++

4. node* h = new node;
   node* n = h;
	 delete n will not destroy h

5. dont assume when you instantize an object or struct, everything inside is instantize to NULL.
   YOU NEED to do it yourself.
