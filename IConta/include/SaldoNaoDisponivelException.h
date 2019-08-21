#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H
#include <exception>
#include <iostream>

class SaldoNaoDisponivelException: public std::exception
{
    public:
        SaldoNaoDisponivelException() throw();
        virtual ~SaldoNaoDisponivelException() throw();
        virtual std::string what();

    protected:
        std::string error = "Saldo nao disponivel\n";

    private:
};

#endif // SALDONAODISPONIVELEXCEPTION_H
