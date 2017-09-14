#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"
#define TAM 10

class ControleDeGastos
{
    private:
        Despesa despesas[TAM];

     public:
        int i;
        ControleDeGastos();
        ControleDeGastos(Despesa,int);
        void setDespesas(Despesa,int);
        double calculaTotalDeDespesa();
        bool existeDespesaDoTipo(string);

};

#endif
