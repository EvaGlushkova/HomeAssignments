/* Glushkova Eva st108255@student.spbu.ru 
5th test project */

#ifndef TRANSFORMER_H
#define TRANSFORMER_H 


class Transformer{   
    public:
        Transformer();
        
        virtual void transform() = 0;
        virtual void openFire() = 0;
        virtual void jump() = 0;
        
        ~Transformer();
};

#endif
