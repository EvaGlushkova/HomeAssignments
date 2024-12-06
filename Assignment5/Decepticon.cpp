#include "Transformer.h"
#include "Decepticon.h"
#include <iostream>
#include <string>

Decepticon::Decepticon() : Transformer()
{
}

void Decepticon::transform()
{
    std::cout<< "Decepticon transform method\n";
}

void Decepticon::openFire()
{
    std::cout<< "Decepticon openFire method\n";
}

void Decepticon::jump()
{
    std::cout<< "Decepticon jump method\n";
}

Decepticon::~Decepticon()
{
}
