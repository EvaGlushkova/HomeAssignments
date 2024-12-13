#include "Optimus_Prime.h"

Optimus_Prime::Optimus_Prime()
{
    this->_form = "normal";
    this->_series = "first";
    this->_vision = 100;
}

bool Optimus_Prime::transform()
{
    return true;
}

void Optimus_Prime::setForm(std::string form)
{
    this->_form = form;
}

void Optimus_Prime::setSeries(std::string series)
{
    this->_series = series;
}

void Optimus_Prime::setVision(uint vision)
{
    this->_vision = vision;
}

std::string Optimus_Prime::getForm()
{
    return _form;
}

std::string Optimus_Prime::getSeries()
{
    return _series;
}

uint Optimus_Prime::getVision()
{
    return _vision;
}

Optimus_Prime::~Optimus_Prime()
{
}

bool Optimus_Prime::operator < (Optimus_Prime& second)
{
    return this->_vision < second._vision;
}

bool Optimus_Prime::operator >(Optimus_Prime& second)
{
    return this->_vision > second._vision;
}

std::ostream &operator << (std::ostream &out, Optimus_Prime &transformer)
{
    out << "Form: " << transformer.getForm() << " Series: " <<
        transformer.getSeries() << " Vision: " << transformer.getVision() << "\n";

    return out;
}

