/* Glushkova Eva st108255@student.spbu.ru 
4th test project */

#ifndef TRANSFORMER_h 
#define TRANSFORMER_h 

#include <iostream>
#include <sstream>
#include <string>
#include "Gun1.h"
#include "Gun2.h"

class Transformer{
    private:
        uint _level;
        uint _strength;
        uint _range;
        uint _ammo;
        Gun1 gun1;
        Gun2* gun2;
    
    public:
		Transformer();
		Transformer(uint level, uint strength, uint range, uint ammo);
		
		uint getLevel();
		uint getStrength();
		uint getRange();
		uint getAmmo();
		
		void setLevel(uint level);
		void setStrength(uint strength);
		void setRange(uint range);
		void setAmmo(uint ammo);
	      
		void setGun1(std::string gun1_name);
		void setGun2(std::string gun2_name);
		
		bool fire();
		bool jump();
		
		~Transformer();
        
        
        friend std::ostream &operator << (std::ostream &out, Transformer &transformer);  
        friend std::istream &operator >> (std::istream &in, Transformer &transformer);
        
        bool operator < (Transformer& second);
        bool operator > (Transformer& second);           
};

#endif 
