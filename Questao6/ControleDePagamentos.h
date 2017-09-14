#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamentos.h"

class ControleDePagamentos
{
    private:
        Pagamentos pagamentos[10];
    public:
        int i;
        ControleDePagamentos();
        ControleDePagamentos(Pagamentos,int);
        void setPagamentos(Pagamentos,int);
        double calculaTotalDePagamentos();
        bool existePagamentoFunc(string);
};

#endif // CONTROLEDEPAGAMENTOS_H
