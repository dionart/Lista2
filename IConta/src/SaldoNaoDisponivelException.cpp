#include "SaldoNaoDisponivelException.h"

SaldoNaoDisponivelException::SaldoNaoDisponivelException() throw()
{
    //ctor
}

SaldoNaoDisponivelException::~SaldoNaoDisponivelException() throw()
{

}

std::string SaldoNaoDisponivelException::what()
{
    return error;
}
