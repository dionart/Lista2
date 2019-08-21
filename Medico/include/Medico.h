#ifndef MEDICO_H
#define MEDICO_H
#include <iostream>

class Medico
{
    public:
        Medico();
        virtual void atendimento();

        std::string getNome();
        float getPeso();
        float getAltura();
        std::string getEspecialidade();
        void setNome(std::string nome);
        void setPeso(float peso);
        void setAltura(float altura);
        void setEspecialidade(std::string especialidade);

    protected:
        std::string nome;
        float peso;
        float altura;
        std::string especialidade;

};

#endif // MEDICO_H
