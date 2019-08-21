#include "Medico.h"

Medico::Medico()
{
    //ctor
}
void Medico::atendimento()
{

}

std::string Medico::getNome()
{
    return nome;
}

float Medico::getPeso()
{
    return peso;
}

float Medico::getAltura()
{
    return altura;
}

std::string Medico::getEspecialidade()
{
    return especialidade;
}

void Medico::setNome(std::string nome)
{
    this->nome = nome;
}

void Medico::setPeso(float peso)
{
    if(peso<0)
        this->peso = 1;
    else
        this->peso = peso;
}

void Medico::setAltura(float altura)
{
    if(altura<0)
        this->altura = 1;
    else
        this->altura = altura;
}

void Medico::setEspecialidade(std::string especialidade)
{
    this->especialidade = especialidade;
}
