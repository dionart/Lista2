#include <iostream>
#include "TestaValidaNumero.h"

using namespace std;

int main()
{
    TestaValidaNumero *t1 = new TestaValidaNumero();

    try{
        cout<<"teste numero 0:"<<endl;
        t1->validaNumero(0);
    }
    catch (ValorAbaixoException teste ) {
		cerr << "Erro :" << teste.what() << endl;
	}
	catch (ValorAcimaException teste) {
		cerr << "Erro  : " << teste.what() << endl;
	}
	catch (ValorMuitoAcimaException teste) {
		cerr << "Erro : " << teste.what() << endl;
	}
	catch (...) {
		cerr << "Erro desconhecido" << endl;
	}

	try{
        cout<<"teste numero 50:"<<endl;
        t1->validaNumero(50);
	}catch (ValorAbaixoException teste ) {
		cerr << "Erro :" << teste.what() << endl;
	}
	catch (ValorAcimaException teste) {
		cerr << "Erro :" << teste.what() << endl;
	}
	catch (ValorMuitoAcimaException teste) {
		cerr << "Erro :" << teste.what() << endl;
	}
	catch (...) {
		cerr << "Erro desconhecido" << endl;
	}

	try{
        cout<<"teste numero 110:"<<endl;
        t1->validaNumero(110);
	}catch (ValorAbaixoException teste ) {
		cerr << "Erro :" << teste.what() << endl;
	}
	catch (ValorAcimaException teste) {
		cerr << "Erro :" << teste.what() << endl;
	}
	catch (ValorMuitoAcimaException teste) {
		cerr << "Erro : " << teste.what() << endl;
	}
	catch (...) {
		cerr << "Erro desconhecido" << endl;
	}

	try{
        cout<<"teste numero 1000:"<<endl;
        t1->validaNumero(1000);
	}catch (ValorAbaixoException teste ) {
		cerr << "Erro :" << teste.what() << endl;
	}
	catch (ValorAcimaException teste) {
		cerr << "Erro :" << teste.what() << endl;
	}
	catch (ValorMuitoAcimaException teste) {
		cerr << "Erro : " << teste.what() << endl;
	}
	catch (...) {
		cerr << "Erro desconhecido" << endl;
	}

    return 0;
}
