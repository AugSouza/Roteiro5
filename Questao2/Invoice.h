#ifndef INVOICE_H
#define INVOICE_H
#include <string>

using namespace std;


class Invoice
{
    public:
        int numero;
        int quantidade;
        float preco;
        string descricao;

        Invoice(int,int,float,string);
        float InvoiceAmount(int,float);
};



#endif
