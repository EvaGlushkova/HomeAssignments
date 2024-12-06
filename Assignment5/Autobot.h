/* Glushkova Eva st108255@student.spbu.ru
5th test project */

#ifndef AUTOBOT_H
#define AUTOBOT_H

#include "Transformer.h"

class Autobot : public Transformer
{
public:
    Autobot();

    void transform() override;
    void openFire() override;
    void jump() override;

    ~Autobot();
};

#endif
