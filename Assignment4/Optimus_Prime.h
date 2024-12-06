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

public:
    Optimus_Prime();
    bool transform();

    void setForm(std::string form);
    void setSeries(std::string series);

    std::string getForm();
    std::string getSeries();

    ~Optimus_Prime();

};

#endif
