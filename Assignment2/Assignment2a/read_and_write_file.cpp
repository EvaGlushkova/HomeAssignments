#include <iostream>
#include <fstream>
#include <filesystem> 
#include "read_and_write_file.h"


void read_and_write_file(const char* file1, const char* file2){ 
  
   std::ifstream file(file1, std::ios::binary | std::ios::in);
   std::ofstream new_file(file2, std::ios::binary | std::ios::out);
   std::uintmax_t size = std::filesystem::file_size(file1);
   
   char* buffer = new char[size];
   
   if(!new_file){
       std::cout << "Error";
       return;
   }
   
   file.read(buffer, size);
  
   reverse_array(buffer, size);
   
   new_file.write(buffer, size);
   
   file.close();
   new_file.close();
   
   delete[] buffer;
   
}

void reverse_array(char* mas, std::uintmax_t size){

    for (std::uintmax_t i = 0; i < size/2; i++){
   
       char tmp = mas[i];
       mas[i] = mas[size - i - 1];
       mas[size - i - 1] = tmp;
   }
}

