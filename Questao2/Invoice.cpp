#include "Invoice.h"
#include <iostream>

using namespace std;

Invoice::Invoice(int numero, int quantidade, float preco, string descricao)
{
    setNumero(numero);
    setQuantidade(quantidade);
    setPreco(preco);
    setDescricao(descricao);
}

void Invoice::setNumero(int numero)
{
    this -> numero = numero;
}

void Invoice::setQuantidade(int quantidade)
{
    this -> quantidade = quantidade;
}

void Invoice::setPreco(float preco)
{
    this -> preco = preco;
}

void Invoice::setDescricao(string descricao)
{
    this -> descricao = descricao;
}

int Invoice::getNumero()
{
    return numero;
}

int Invoice::getQuantidade()
{
    return quantidade;
}

float Invoice::getPreco()
{
    return preco;
}

string Invoice::getDescricao()
{
    return descricao;
}

 float Invoice::InvoiceAmount(int quantidade, float preco)
{
    if (quantidade < 0)
        quantidade = 0;
    else if (preco < 0)
            preco = 0;

    return (float)quantidade*preco;
}

