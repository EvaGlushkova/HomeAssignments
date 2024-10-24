#include "Optimus_Prime.h"

Optimus_Prime::Optimus_Prime(){
    this->_form = "normal";
    this->_series = "first";
}

bool Optimus_Prime::transform(){
    return true;
}

void Optimus_Prime::setForm(std::string form){
    this->_form = form;
}

void Optimus_Prime::setSeries(std::string series){
    this->_series = series;
}

std::string Optimus_Prime::getForm(){
    return _form;
}

std::string Optimus_Prime::getSeries(){
    return _series;
}

Optimus_Prime::~Optimus_Prime(){
}
