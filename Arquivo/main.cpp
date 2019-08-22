#include <string>
#include <fstream>
#include <iostream>

using namespace std;
int main(){
    ifstream input("teste.txt", ios::in);
    ofstream saida("teste_bkp.txt", ios::out);
    string nome;
    int idade,salario;

    if(!input.is_open()){
        cout<<"Nao foi possivel abrir input"<<endl;
        return 0;
    }
    if(!saida.is_open()){
        cout<<"Nao foi possivel abrir output"<<endl;
        return 0;
    }
    while(!input.eof()){
        getline(input,nome);
        cout<<nome<<endl;
        input>>idade;
        cout<<idade<<endl;
        input>>salario;
        cout<<salario<<endl;
    }

    saida<<nome<< endl;
    saida<<idade<< endl;
    saida<<salario;

    input.close();
    saida.close();
    return 0;
}
