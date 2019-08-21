#include "Cirurgiao.h"
using namespace std;

Cirurgiao::Cirurgiao()
{

}

Cirurgiao::Cirurgiao(std::string nome, float altura, float peso)
{
    setNome(nome);
    setAltura(altura);
    setPeso(peso);
    setEspecialidade("Cirurgias");
}

void Cirurgiao::atendimento()
{
    cout<<"Executando cirurgia"<<endl;
}
