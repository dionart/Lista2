#include "SistemaGerenciaFolha.h"

SistemaGerenciaFolha::SistemaGerenciaFolha()
{

}

void SistemaGerenciaFolha::setFuncionarios(Funcionario* f)
{
    funcionarios[a] = f;
	a++;
}

double SistemaGerenciaFolha::calcularTotalFolha()
{
    double total=0;

    for(int i=0;i<MAX_FUNCIONARIOS;i++){
        total+=funcionarios[i]->calculaSalario();
    }
    return total;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(int matricula)
{
    for(int i=0;i<MAX_FUNCIONARIOS;i++){
        if(funcionarios[i]->getMatricula() == matricula){
            return funcionarios[i]->calculaSalario();
        }
    }
    throw FuncionarioNaoExisteException();
    return -1;
}
