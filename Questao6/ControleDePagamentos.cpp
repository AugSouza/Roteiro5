#include "ControleDePagamentos.h"


ControleDePagamentos::ControleDePagamentos()
{
    //ctor
}

ControleDePagamentos::ControleDePagamentos(Pagamentos pagamentos,int i)
{
    setPagamentos(pagamentos, i);
}

void ControleDePagamentos::setPagamentos(Pagamentos pagamentos, int i)
{
    this -> pagamentos[i] = pagamentos;
}

double ControleDePagamentos::calculaTotalDePagamentos()
{
    double soma = 0.0;

    for(int j=0; j<i; j++)
    {
        soma+= pagamentos[j].getvalorPagamento();
    }

    return soma;
}

bool ControleDePagamentos::existePagamentoFunc(string comparar)
{
    for(int k=0; k<i; k++)
    {
        if(comparar.compare(pagamentos[k].getnomeFuncionario()) == 0)
            return true;
    }
    return false;

}

