#include "ValorAcimaException.h"

ValorAcimaException::ValorAcimaException()
{
    //ctor
}
std::string ValorAcimaException::what()
{
    return error;
}
