#include "Otorrino.h"

using namespace std;
Otorrino::Otorrino()
{

}
Otorrino::Otorrino(std::string nome, float altura, float peso)
{
    setNome(nome);
    setAltura(altura);
    setPeso(peso);
    setEspecialidade("Otorrinolaringologia");
}

void Otorrino::atendimento()
{
    cout<<"Checando ouvidos"<<endl;
}
