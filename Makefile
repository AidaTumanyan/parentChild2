all:main
		
main: parentChild2.o  
	g++  parentChild2.o -o  main

parentChild2.o: parentChild2.cpp 
	g++ -c   parentChild2.cpp -o parentChild2.o

clean:
	rm *.o main
