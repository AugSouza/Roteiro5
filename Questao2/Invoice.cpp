#include "Invoice.h"
#include <iostream>

using namespace std;

Invoice::Invoice(int numero, int quantidade, float preco, string descricao)
{
    this -> numero = numero;
    this -> quantidade = quantidade;
    this -> preco = preco;
    this -> descricao = descricao;
}

float Invoice::InvoiceAmount(int quantidade, float preco)
{
    if (quantidade < 0)
        quantidade = 0;
    else if (preco < 0)
            preco = 0;

    return (float)quantidade*preco;
}
