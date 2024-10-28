#include "Transformer.h"

Transformer::Transformer():gun1(){
    _level = 1;
    _strength = 100;
    _range = 1;
    _ammo = 100;
}

bool Transformer::fire(){
    _ammo--;
    return true;
}

bool Transformer::jump(){
    _level++;
    return true;
}

void Transformer::setLevel(uint level){
    _level = level;
}

void Transformer::setStrength(uint strength){
    _strength = strength;
}

void Transformer::setRange(uint range){
    _range = range;
}

void Transformer::setAmmo(uint ammo){
    _ammo = ammo;
}

void Transformer::setGun1(std::string gun1_name){
    gun1.setGun1(gun1_name);
}

void Transformer::setGun2(std::string gun2_name){
    (*gun2).setGun2(gun2_name);
}

uint Transformer::getLevel(){
    return _level;
}

uint Transformer::getStrength(){
    return _strength;
}

uint Transformer::getRange(){
    return _range;
}

uint Transformer::getAmmo(){
    return _ammo;
}

Transformer::~Transformer(){
}

