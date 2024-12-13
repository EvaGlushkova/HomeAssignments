#include "Bumblebee.h"

Bumblebee::Bumblebee()
{
    this->_season = "first";
    this->_vision = 100;
}

bool Bumblebee::transform()
{
    return true;
}

void Bumblebee::setSeason(std::string season)
{
    this->_season = season;
}

void Bumblebee::setVision(uint vision)
{
    this->_vision = vision;
}

std::string Bumblebee::getSeason()
{
    return _season;
}

uint Bumblebee::getVision()
{
    return _vision;
}

Bumblebee::~Bumblebee()
{
}

bool Bumblebee::operator < (Bumblebee& second)
{
    return this->_vision < second._vision;
}

bool Bumblebee::operator >(Bumblebee& second)
{
    return this->_vision > second._vision;
}

std::ostream &operator << (std::ostream &out, Bumblebee &transformer)
{
    out << "Season: " << transformer.getSeason() << " Vision: " <<
        transformer.getVision() << "\n";

    return out;
}

