#ifndef VALORMUITOACIMAEXCEPTION_H
#define VALORMUITOACIMAEXCEPTION_H
#include <iostream>

class ValorMuitoAcimaException
{
    public:
        ValorMuitoAcimaException();
        virtual std::string what();

    protected:
        std::string error = "Valor muito acima\n";

    private:
};

#endif // VALORMUITOACIMAEXCEPTION_H
