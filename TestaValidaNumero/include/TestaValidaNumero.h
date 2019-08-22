#ifndef TESTAVALIDANUMERO_H
#define TESTAVALIDANUMERO_H
#include <exception>
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"

class TestaValidaNumero : public std::exception
{
    public:
        TestaValidaNumero();
        void validaNumero(int num);

    protected:

    private:
};

#endif // TESTAVALIDANUMERO_H
