#ifndef CIRURGIAO_H
#define CIRURGIAO_H
#include "Medico.h"
#include <iostream>

class Cirurgiao:public Medico
{
    public:
        Cirurgiao();
        Cirurgiao(std::string nome, float altura, float peso);
        void atendimento();


    private:
};

#endif // CIRURGIAO_H
