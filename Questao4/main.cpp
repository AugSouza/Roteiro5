#include <iostream>
#include <string>
#include "CadastrodePessoas.h"

using namespace std;

int main()
{
    string n;
    int i, j;
    CadastrodePessoas c1;

    for(j = 0; j < 3; j++){
        cout << "Informe o nome: " << endl;
        cin >> n;
        c1.cadP[j].setNome(n);
        cout << "Informe a idade: " << endl;
        cin >> i;
        c1.cadP[j].setIdade(i);
        cout << "Informe telefone: " << endl;
        cin >> n;
        c1.cadP[j].setTelefone(n);
    }
    cout << "\n***---------------------------------------***" << endl;
    for(j = 0; j < 3; j++){
        cout << "Nome: " << c1.cadP[j].getNome() << endl;
        cout << "Idade: " << c1.cadP[j].getIdade() << endl;
        cout << "Informe telefone: " << c1.cadP[j].getTelefone() << endl;
    }

    return 0;
}
