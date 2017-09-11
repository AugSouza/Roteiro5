#include "Invoice.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Invoice produto = Invoice(0,0,0.0,"");
    int num, quant;
    float prec;
    string desc;

    cout << "Nome do produto: ";
    cin >> desc;
    produto.setDescricao(desc);

    cout << "Codigo do produto: ";
    cin >> num;
    produto.setNumero(num);

    cout << "Quantidade do produto: ";
    cin >> quant;
    produto.setQuantidade(quant);

    cout << "Valor do produto: ";
    cin >> prec;
    produto.setPreco(prec);


    cout << endl << endl << "\t*********************" << endl;
    cout << "\tDESCRICAO DO PRODUTO" << endl;
    cout << "\t*********************" << endl;
    cout << endl << "\tPRODUTO: " <<produto.getDescricao() << endl;
    cout << "\tCODIGO: " <<produto.getNumero() << endl;
    cout << "\tQUANTIDADE: " <<produto.getQuantidade() << endl;
    cout << "\tPRECO: " <<produto.getPreco() << endl;
    cout << endl << "\tTOTAL DA FATURA: " << produto.InvoiceAmount(produto.getQuantidade(),produto.getPreco()) << endl;



}
