#include "Empregado.h"
#include <iostream>

void Empregado::setNome(string nome)
{
    this -> nome = nome;
}

void Empregado::setSobrenome(string sobrenome)
{
    this -> sobrenome = sobrenome;
}

void Empregado::setSalario(float salario)
{
    if(salario < 0)
    {
        salario = 0;
        this -> salario = salario;
    }else
        this -> salario = salario;


}

string Empregado::getNome()
{
    return nome;
}

string Empregado::getSobrenome()
{
    return sobrenome;
}

float Empregado::getSalario()
{
    return salario;
}

Empregado::Empregado(string nome, string sobrenome, float salario)
{
    setNome(nome);
    setSobrenome(sobrenome);
    setSalario(salario);
}

