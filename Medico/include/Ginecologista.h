#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H
#include "Medico.h"
#include <iostream>


class Ginecologista:public Medico
{
    public:
        Ginecologista();
        Ginecologista(std::string nome, float altura, float peso);
        void atendimento();

    protected:

    private:
};

#endif // GINECOLOGISTA_H
