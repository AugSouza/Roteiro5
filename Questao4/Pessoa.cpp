#include "Pessoa.h"

Pessoa::Pessoa(){
    nome = "";
    idade = 0;
    telefone = "";
}

Pessoa::Pessoa(string nome, int idade, string telefone)
{
    setNome(nome);
    setIdade(idade);
    setTelefone(telefone);
}

void Pessoa::setNome(string nome)
{
    this->nome = nome;
}
void Pessoa::setIdade(int idade)
{
    this->idade = idade;
}
void Pessoa::setTelefone(string telefone)
{
    this->telefone = telefone;
}

string Pessoa::getNome()
{
    return nome;
}
int Pessoa::getIdade()
{
    return idade;
}
string Pessoa::getTelefone()
{
    return telefone;
}

Pessoa::~Pessoa()
{
    //dtor
}
