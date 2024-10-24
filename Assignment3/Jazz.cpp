#include "Jazz.h"

Jazz::Jazz(){
    this->_season = "first";
    this->_form = "normal";
}

bool Jazz::transform(){
    return true;
}

void Jazz::setSeason(std::string season){
    this->_season = season;
}

void Jazz::setForm(std::string form){
    this->_form = form;
}

std::string Jazz::getSeason(){
    return _season;
}

std::string Jazz::getForm(){
    return _form;
}

Jazz::~Jazz(){
}

