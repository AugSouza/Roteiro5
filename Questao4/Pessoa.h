#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using namespace std;

class Pessoa
{
    public:
        Pessoa();
        Pessoa(string, int, string);
        void setNome(string);
        void setIdade(int);
        void setTelefone(string);
        string getNome();
        int getIdade();
        string getTelefone();
        virtual ~Pessoa();

    protected:

    private:
        string nome;
        int idade;
        string telefone;
};

#endif // PESSOA_H
