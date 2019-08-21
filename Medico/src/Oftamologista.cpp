#include "Oftamologista.h"
using namespace std;

Oftamologista::Oftamologista()
{

}

Oftamologista::Oftamologista(std::string nome, float altura, float peso)
{
    setNome(nome);
    setAltura(altura);
    setPeso(peso);
    setEspecialidade("Oftamologia");
}

void Oftamologista::atendimento()
{
    cout<<"Checando visao"<<endl;
}
