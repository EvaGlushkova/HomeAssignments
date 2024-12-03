/* Glushkova Eva st108255@student.spbu.ru 
5th test project */

#ifndef DECEPTICON_H
#define DECEPTICON_H 

#include "Transformer.h"

class Decepticon : public Transformer{
    public:
        Decepticon();
        
        void transform() override;
        void openFire() override;
        void jump() override;
        
        ~Decepticon();
};

#endif
