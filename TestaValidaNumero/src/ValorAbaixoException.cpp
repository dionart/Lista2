#include "ValorAbaixoException.h"

ValorAbaixoException::ValorAbaixoException()
{
    //ctor
}
std::string ValorAbaixoException::what()
{
    return error;
}
