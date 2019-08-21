#ifndef OFTAMOLOGISTA_H
#define OFTAMOLOGISTA_H
#include "Medico.h"
#include <iostream>

class Oftamologista:public Medico
{
    public:
        Oftamologista();
        Oftamologista(std::string nome, float altura, float peso);
        void atendimento();

    protected:

    private:
};

#endif // OFTAMOLOGISTA_H
