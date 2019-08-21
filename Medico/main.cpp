#include <iostream>
#include "Cirurgiao.h"
#include "Oftamologista.h"
#include "Ginecologista.h"
#include "Otorrino.h"

using namespace std;

int main()
{
    Medico *m1 = new Cirurgiao("Raquel",1.60,57);
    Medico *m2 = new Oftamologista("Milton", 1.80, 80);
    Medico *m3 = new Ginecologista("Thais", 1.58,58);
    Medico *m4 = new Otorrino("Samuel",1.80, 70);

    cout<<"Especialidade:"<<m1->getEspecialidade()
    <<"\nNome:"<<m1->getNome()
    <<"\nAltura:"<<m1->getAltura()
    <<"\nPeso:"<<m1->getPeso()<<endl;
    m1->atendimento();
    cout<<endl;
    cout<<"Especialidade:"<<m2->getEspecialidade()
    <<"\nNome:"<<m2->getNome()
    <<"\nAltura:"<<m2->getAltura()
    <<"\nPeso:"<<m2->getPeso()<<endl;
    m2->atendimento();
    cout<<endl;
    cout<<"Especialidade:"<<m3->getEspecialidade()
    <<"\nNome:"<<m3->getNome()
    <<"\nAltura:"<<m3->getAltura()
    <<"\nPeso:"<<m3->getPeso()<<endl;
    m3->atendimento();
    cout<<endl;
    cout<<"Especialidade:"<<m4->getEspecialidade()
    <<"\nNome:"<<m4->getNome()
    <<"\nAltura:"<<m4->getAltura()
    <<"\nPeso:"<<m4->getPeso()<<endl;
    m4->atendimento();


    return 0;
}
