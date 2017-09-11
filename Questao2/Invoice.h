#ifndef INVOICE_H
#define INVOICE_H
#include <string>

using namespace std;


class Invoice
{
    private:
        int numero;
        int quantidade;
        float preco;
        string descricao;

    public:
        Invoice(int,int,float,string);

        void setNumero(int);
        void setQuantidade(int);
        void setPreco(float);
        void setDescricao(string);

        int getNumero();
        int getQuantidade();
        float getPreco();
        string getDescricao();

        float InvoiceAmount(int,float);
};



#endif
