#include "Empregado.h"
#include <iostream>

int main()
{
    Empregado empregado1("", "" , 0.0),
              empregado2("", "" , 0.0);
    string aux;
    float sal;


    cout << "Nome do primeiro funcionario: ";
    cin >> aux;
    empregado1.setNome(aux);
    cout << "Sobrenome do primeiro funcionario: ";
    cin >> aux;
    empregado1.setSobrenome(aux);
    cout << "Salario do primeiro funcionario: ";
    cin >> sal;
    empregado1.setSalario(sal);


    cout << "Nome do segundo funcionario: ";
    cin >> aux;
    empregado2.setNome(aux);
    cout << "Sobrenome do segundo funcionario: ";
    cin >> aux;
    empregado2.setSobrenome(aux);
    cout << "Salario do segundo funcionario: ";
    cin >> sal;
    empregado2.setSalario(sal);

    cout << endl << endl << "\t*********************" << endl;
    cout << "\t     FUNCIONARIOS" << endl;
    cout << "\t*********************" << endl;
    cout << endl << "\tEmpregado 1 " << endl;
    cout << "\tNome:\t\t" << empregado1.getNome() << endl;
    cout << "\tSobrenome:\t" << empregado1.getSobrenome() << endl;
    cout << "\tSalario Anual:\t" << empregado1.getSalario() << endl;
    cout << endl << "\tEmpregado 2 " << endl;
    cout << "\tNome:\t\t" << empregado2.getNome() << endl;
    cout << "\tSobrenome:\t" << empregado2.getSobrenome() << endl;
    cout << "\tSalario Anual:\t" << empregado2.getSalario() << endl << endl;

    cout << "\t***Os empregados receberam um aumento de 10%***." << endl << endl;

    cout << "\tSalario de " << empregado1.getNome() << " passa de R$ "
    << empregado1.getSalario() << " para:\tR$ " << (empregado1.getSalario() + empregado1.getSalario() * 0.1) << endl;
    cout << "\tSalario de " << empregado2.getNome() << " passa de R$ "
    << empregado2.getSalario() << " para:\tR$ " << (empregado2.getSalario()+ empregado2.getSalario() * 0.1) << endl;


    return 0;
}
