PROJECT = MyPro2

$(PROJECT) : main.o read_and_write_file.o
	g++ main.o read_and_write_file.o -o $(PROJECT) 
   
main.o : main.cpp 
	g++ -c main.cpp -o main.o 

read_and_write_file.o : read_and_write_file.cpp read_and_write_file.h
	g++ -c read_and_write_file.cpp -o read_and_write_file.o

clean:
	rm $(PROJECT) *.o
