#include "Pagamentos.h"

Pagamentos::Pagamentos()
{
    setvalorPagamento(0);
    setnomeFuncionario("");
}

Pagamentos::Pagamentos(double valorPagamento, string nomeFuncionario)
{
    setvalorPagamento(valorPagamento);
    setnomeFuncionario(nomeFuncionario);
}

void Pagamentos::setvalorPagamento(double valor)
{
    valorPagamento = valor;
}

void Pagamentos::setnomeFuncionario(string nome)
{
    nomeFuncionario = nome;
}

double Pagamentos::getvalorPagamento()
{
    return valorPagamento;
}

string Pagamentos::getnomeFuncionario()
{
    return nomeFuncionario;
}
