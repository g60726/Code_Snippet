all:
	g++ baic.cpp -o basic.o
	g++ pointer.cpp -o pointer.o
	g++ DataStructure.cpp -o DataStructure.o
hello.o : basic.cpp
	g++ basic.cpp -o basic.o

pointer.o : pointer.cpp
	g++ pointer.cpp -o pointer.o

DataStructure.o : DataStructure.cpp
	g++ pointer.cpp -o DataStructure.o

clean : 
	rm *.o
