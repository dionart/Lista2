#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H
#include "Funcionario.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#define MAX_FUNCIONARIOS 3
#include "FuncionarioNaoExisteException.h"


class SistemaGerenciaFolha
{
    public:
        SistemaGerenciaFolha();
        void setFuncionarios(Funcionario* f);
        double calcularTotalFolha();
        double consultaSalarioFuncionario(int matricula);

    private:
        Funcionario* funcionarios[MAX_FUNCIONARIOS];
        int a = 0;

};

#endif // SISTEMAGERENCIAFOLHA_H
