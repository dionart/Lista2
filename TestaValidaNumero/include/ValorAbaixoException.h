#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H
#include <iostream>


class ValorAbaixoException
{
    public:
        ValorAbaixoException();
        virtual std::string what();

    protected:
        std::string error = "Valor abaixo\n";

    private:
};

#endif // VALORABAIXOEXCEPTION_H
