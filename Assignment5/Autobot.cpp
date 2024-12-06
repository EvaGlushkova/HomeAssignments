#include "Autobot.h"
#include "Transformer.h"
#include <iostream>
#include <string>

Autobot::Autobot() : Transformer()
{
}

void Autobot::transform()
{
    std::cout<< "Autobot transform method\n";
}

void Autobot::openFire()
{
    std::cout<< "Autobot openFire method\n";
}

void Autobot::jump()
{
    std::cout<< "Autobot jump method\n";
}

Autobot::~Autobot()
{
}
