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
        
        bool operator < (Transformer& second) {
            return this->_level < second._level;
        }
        
        bool operator > (Transformer& second) {
            return this->_level > second._level;
        }
        
        friend std::ostream &operator << (std::ostream &out, Transformer &transformer){
            out << "Level: " << transformer.getLevel() << " Strength: " << 
            transformer.getStrength() << " Range: " << transformer.getRange() << 
            " Ammo: " << transformer.getAmmo() << "\n";
            
            return out;
        }
        
        friend std::istream &operator >> (std::istream &in, Transformer &transformer){
            uint lev, st, range, ammo;
            in >> lev;
            in >> st;
            in >> range;
            in >> ammo;
            
            transformer = Transformer(lev, st, range, ammo);
            return in;
        }
       
        
        ~Transformer();
           
};

#endif 
