/* Glushkova Eva st108255@student.spbu.ru 
4th test project */

#ifndef JAZZ_h 
#define JAZZ_h 

#include <string>
#include "Transformer.h"

class Jazz: public Transformer{
    private:
        std::string _form;
        std::string _season;
        
    public:
        Jazz();
        bool transform();
        
        void setForm(std::string form);
        void setSeason(std::string season);
        
        std::string getForm();
        std::string getSeason();
        
        ~Jazz();
              
};

#endif 
