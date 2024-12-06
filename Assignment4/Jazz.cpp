#include "Jazz.h"

Jazz::Jazz()
{
    this->_season = "first";
    this->_form = 0;
}

bool Jazz::transform()
{
    return true;
}

void Jazz::setSeason(std::string season)
{
    this->_season = season;
}

void Jazz::setForm(uint form)
{
    this->_form = form;
}

std::string Jazz::getSeason()
{
    return _season;
}

uint Jazz::getForm()
{
    return _form;
}

Jazz::~Jazz()
{
}

bool Jazz::operator < (Jazz& second)
{
    return this->_form < second._form;
}

bool Jazz::operator > (Jazz& second)
{
    return this->_form > second._form;
}

