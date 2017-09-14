#include "Despesa.h"
#include "ControleDeGastos.h"
#include <iostream>

using namespace std;

int main()
{
    Despesa desp1;
    ControleDeGastos control;
    control.i = 0;
    int opcao;
    double val;
    string nomeDesp;

    while(1)
    {
        cout << "\t\n*** MENU ***" << endl;
        cout << "1 - Nova despesa" << endl;
        cout << "2 - Pesquisar um tipo de despesa" << endl;
        cout << "3 - Mostrar total de gasto" << endl;
        cout << "4 - Sair" << endl;

        cout << "\nEscolhe sua opcao: ";
        cin >> opcao;

        switch(opcao)
        {
            case 1:
                cout << "Valor da despesa: ";
                cin >> val;
                cout << "Tipo de despesa: ";
                cin >> nomeDesp;

                desp1.setValor(val);
                desp1.setTipoDeGasto(nomeDesp);
                control.setDespesas(desp1,control.i);
                control.i++;

                break;

            case 2:
                cout << "Informe o tipo: ";
                cin >> nomeDesp;

                if(control.existeDespesaDoTipo(nomeDesp) == true)
                    cout << "Existe despesa desse tipo (" << nomeDesp << ")" << endl;
                else
                    cout << "Nao existe despesa desse tipo." << endl;
                break;

            case 3:
                cout << "\nO total de gasto eh: " << control.calculaTotalDeDespesa() << endl;
                break;

            case 4:
                break;

            default:
                cout << "Opcao invalida!" << endl;
        }
        if(opcao == 4)
            break;



    }

    return 0;

}
