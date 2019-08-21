#ifndef OTORRINO_H
#define OTORRINO_H
#include "Medico.h"
#include <iostream>

class Otorrino:public Medico
{
    public:
        Otorrino();
        Otorrino(std::string nome, float altura, float peso);
        void atendimento();

    protected:

    private:
};

#endif // OTORRINO_H
