/* Glushkova Eva st108255@student.spbu.ru
4th test project */

#ifndef JAZZ_h
#define JAZZ_h

#include <string>
#include "Transformer.h"

class Jazz: public Transformer
{
private:
    uint _form;
    std::string _season;

public:
    Jazz();
    bool transform();

    void setForm(uint form);
    void setSeason(std::string season);

    uint getForm();
    std::string getSeason();

    ~Jazz();
    
    friend std::ostream &operator << (std::ostream &out, Jazz &transformer);

    bool operator < (Jazz& second);
    bool operator > (Jazz& second);

};

#endif
