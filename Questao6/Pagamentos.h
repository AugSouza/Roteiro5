#ifndef PAGAMENTOS_H
#define PAGAMENTOS_H
#include <string>

using namespace std;

class Pagamentos
{
   private:
        double valorPagamento;
        string nomeFuncionario;

    public:
        Pagamentos();
        Pagamentos(double,string);
        void setvalorPagamento(double);
        void setnomeFuncionario(string);
        double getvalorPagamento();
        string getnomeFuncionario();
};

#endif // PAGAMENTOS_H
