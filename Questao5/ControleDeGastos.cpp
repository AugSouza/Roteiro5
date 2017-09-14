#include "ControleDeGastos.h"

ControleDeGastos::ControleDeGastos()
{

}

ControleDeGastos::ControleDeGastos(Despesa despesas, int i)
{
    setDespesas(despesas,i);
}

void ControleDeGastos::setDespesas(Despesa despesas, int i)
{
    this -> despesas[i] = despesas;
}

double ControleDeGastos::calculaTotalDeDespesa()
{
    double soma = 0.0;

    for(int j=0; j<i; j++)
    {
        soma+= despesas[j].getValor();
    }

    return soma;
}

bool ControleDeGastos::existeDespesaDoTipo(string comparar)
{
    for(int k=0; k<i; k++)
    {
        if(comparar.compare(despesas[k].getTipoDeGasto()) == 0)
            return true;
    }
    return false;

}



