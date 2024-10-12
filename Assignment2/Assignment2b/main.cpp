/* Glushkova Eva st108255@student.spbu.ru 
second test project */

#include <iostream>
#include <string>
#include "stack.h"
 
int main(){
   std::string str;
   std::getline(std::cin, str);
   try {
       std::cout << double(stack(str)) << '\n';
   }
   catch(...){
       std::cout << "Error" << '\n';
   }
   return 0;
}
