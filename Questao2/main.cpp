#include "Invoice.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Invoice produto = Invoice(0,0,0.0,"");

    cout << "Nome do produto: ";
    cin >> produto.descricao;
    cout << "Codigo do produto: ";
    cin >> produto.numero;
    cout << "Quantidade do produto: ";
    cin >> produto.quantidade;
    cout << "Valor do produto: ";
    cin >> produto.preco;


    cout << endl << endl << "\t*********************" << endl;
    cout << "\tDESCRICAO DO PRODUTO" << endl;
    cout << "\t*********************" << endl;
    cout << endl << "\tPRODUTO: " <<produto.descricao << endl;
    cout << "\tCODIGO: " <<produto.numero << endl;
    cout << "\tQUANTIDADE: " <<produto.quantidade << endl;
    cout << "\tPRECO: " <<produto.preco << endl;
    cout << endl << "\tTOTAL DA FATURA: " << produto.InvoiceAmount(produto.quantidade,produto.preco) << endl;



}
