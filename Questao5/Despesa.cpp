#include "Despesa.h"

Despesa::Despesa()
{
    setValor(0);
    setTipoDeGasto("");
}

Despesa::Despesa(double valor, string tipoDeGasto)
{
    setValor(valor);
    setTipoDeGasto(tipoDeGasto);
}

void Despesa::setValor(double valor)
{
    this -> valor = valor;
}

void Despesa::setTipoDeGasto(string tipoDeGasto)
{
    this -> tipoDeGasto = tipoDeGasto;
}

double Despesa::getValor()
{
    return valor;
}

string Despesa::getTipoDeGasto()
{
    return tipoDeGasto;
}


