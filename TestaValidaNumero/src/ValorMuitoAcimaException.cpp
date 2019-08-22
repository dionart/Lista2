#include "ValorMuitoAcimaException.h"

ValorMuitoAcimaException::ValorMuitoAcimaException()
{
    //ctor
}
std::string ValorMuitoAcimaException::what()
{
    return error;
}
