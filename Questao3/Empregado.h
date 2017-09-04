#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <string>

using namespace std;

class Empregado
{
    private:
        string nome;
        string sobrenome;
        float salario;

    public:
        Empregado(string,string,float);

        void setNome(string);
        void setSobrenome(string);
        void setSalario(float);

        string getNome();
        string getSobrenome();
        float getSalario();

};
#endif // EMPREGADO_H
