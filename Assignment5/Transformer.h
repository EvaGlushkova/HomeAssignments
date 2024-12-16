/* Glushkova Eva st108255@student.spbu.ru
5th test project */

#ifndef TRANSFORMER_H
#define TRANSFORMER_H


class Transformer
{
public:
    Transformer();

    virtual void transform();
    virtual void openFire();
    virtual void jump();

    ~Transformer();
};

#endif
