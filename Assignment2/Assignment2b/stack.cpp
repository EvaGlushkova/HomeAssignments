#include <iostream>
#include <string>
#include "stack.h"

int stack(std::string str){
    if (str.empty()){
        std::cout<< "Empty string" << '\n';
        return -1;
    }
    int len = str.length();
    int *stack = new int[len];
    
    int p = -1;
    int s;
    std::string digit = "";
    
    for (int i = 0; i < len; ++i){    
        if (str[i] == ' ') continue;
        
        if (std::isdigit(str[i])){
            digit += str[i];
            if (i == len - 1 or str[i + 1] == ' '){
                ++p;
                stack[p] = stoi(digit);
                digit = "";
                continue;
            }
        }
               
        else if (str[i] == '+'){
            s = stack[p-1] + stack[p];
            --p;
            stack[p] = s;
            continue;
        }
        else if (str[i] == '-'){
            s = stack[p-1] - stack[p];
            --p;
            stack[p] = s;
            continue;
        }
        else if (str[i] == '*'){
            s = stack[p-1] * stack[p];
            --p;
            stack[p] = s;
            continue;
        }
        else if (str[i] == '/'){
            s = stack[p-1] / stack[p];
            --p;
            stack[p] = s;
            continue;
        }
        
    }
    
    int res = stack[p];
    delete [] stack;
    return res;
}
