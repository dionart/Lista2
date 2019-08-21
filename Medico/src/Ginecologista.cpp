#include "Ginecologista.h"
#include <iostream>
using namespace std;

Ginecologista::Ginecologista()
{

}

Ginecologista::Ginecologista(std::string nome, float altura, float peso)
{
    setNome(nome);
    setAltura(altura);
    setPeso(peso);
    setEspecialidade("Ginecologia");
}


void Ginecologista::atendimento()
{
    cout<<"Executando consulta ginecologica"<<endl;
}
