/* Glushkova Eva st108255@student.spbu.ru
4th test project */

#ifndef BUMBLEBEE_h
#define BUMBLEBEE_h

#include <string>
#include "Transformer.h"

class Bumblebee: public Transformer
{
private:
    std::string _season;
    uint _vision;

public:
    Bumblebee();
    bool transform();

    void setSeason(std::string season);
    void setVision(uint vision);

    std::string getSeason();
    uint getVision();

    ~Bumblebee();

    bool operator < (Bumblebee& second);
    bool operator > (Bumblebee& second);

};

#endif
