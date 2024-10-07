/* Glushkova Eva st108255@student.spbu.ru 
second test project */

#include <iostream>
#include <string> 
#include <fstream>
#include <filesystem> 
#include "read_and_write_file.h"
 
int main(){
   const char* infile = "text.txt";
   const char* outfile = "text_new.txt";
   read_and_write_file(infile, outfile);
   return 0;
}
