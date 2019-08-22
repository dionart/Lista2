#ifndef VALORACIMAEXCEPTION_H
#define VALORACIMAEXCEPTION_H
#include <iostream>

class ValorAcimaException
{
    public:
        ValorAcimaException();
        virtual std::string what();

    protected:
        std::string error = "Valor acima\n";

    private:
};

#endif // VALORACIMAEXCEPTION_H
