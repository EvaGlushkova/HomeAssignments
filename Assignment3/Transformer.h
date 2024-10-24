/* Glushkova Eva st108255@student.spbu.ru 
third test project */

#ifndef TRANSFORMER_h 
#define TRANSFORMER_h 

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
        
        bool fire();
        bool jump();
        
        void setLevel(uint level);
        void setStrength(uint strength);
        void setRange(uint range);
        void setAmmo(uint ammo);
        
        void setGun1(std::string gun1_name);
        void setGun2(std::string gun2_name);
        
        uint getLevel();
        uint getStrength();
        uint getRange();
        uint getAmmo();
        
        ~Transformer();
           
};

#endif 
