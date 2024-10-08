PROJECT = MyPro2b

$(PROJECT) : main.o stack.o
	g++ main.o stack.o -o $(PROJECT) 
   
main.o : main.cpp 
	g++ -c main.cpp -o main.o 

stack.o : stack.cpp stack.h
	g++ -c stack.cpp -o stack.o

clean:
	rm $(PROJECT) *.o
