/* Glushkova Eva st108255@student.spbu.ru
4th test project */

#ifndef OPTIMUS_PRIME_h
#define OPTIMUS_PRIME_h

#include <string>
#include "Transformer.h"

class Optimus_Prime: public Transformer
{
private:
    std::string _form;
    std::string _series;
    uint _vision;

public:
    Optimus_Prime();
    bool transform();

    void setForm(std::string form);
    void setSeries(std::string series);
    void setVision(uint vision);

    std::string getForm();
    std::string getSeries();
    uint getVision();
    
    bool operator < (Optimus_Prime& second);
    bool operator > (Optimus_Prime& second);
    
    friend std::ostream &operator << (std::ostream &out, Optimus_Prime &transformer);

    ~Optimus_Prime();

};

#endif
