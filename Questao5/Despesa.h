#ifndef DESPESA_H
#define DESPESA_H
#include <string>

using namespace std;


class Despesa
{
    private:
        double valor;
        string tipoDeGasto;

    public:
        Despesa();
        Despesa(double,string);
        void setValor(double);
        void setTipoDeGasto(string);
        double getValor();
        string getTipoDeGasto();
};

#endif
