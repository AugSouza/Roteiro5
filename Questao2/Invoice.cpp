#include "Invoice.h"


using namespace std;

Invoice::Invoice(int numero, int quantidade, float preco, string descricao)
{
    numero = 0;
    quantidade = 0;
    preco = 0.0;
    descricao = "";
}

Invoice::InvoiceAmount(int quantidade, float preco)
{
    if (quantidade < 0)
        quantidade = 0;
    else if (preco < 0)
            preco = 0;

    return (float)quantidade*preco;
}
