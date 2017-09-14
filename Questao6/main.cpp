#include "Pagamentos.h"
#include "ControleDePagamentos.h"
#include <iostream>

using namespace std;

int main()
{
    Pagamentos pag1;
    ControleDePagamentos control;
    control.i = 0;
    int opcao;
    double val;
    string nomeFunc;

    while(1)
    {
        cout << "\t\n*** MENU ***" << endl;
        cout << "1 - Novo funcionario" << endl;
        cout << "2 - Pesquisar pagamento por funcionario" << endl;
        cout << "3 - Mostrar total de pagamentos" << endl;
        cout << "4 - Sair" << endl;

        cout << "\nEscolha sua opcao: ";
        cin >> opcao;

        switch(opcao)
        {
            case 1:
                cout << "Valor do pagamento: ";
                cin >> val;
                cout << "Nome do funcionario: ";
                cin >> nomeFunc;

                pag1.setvalorPagamento(val);
                pag1.setnomeFuncionario(nomeFunc);
                control.setPagamentos(pag1,control.i);
                control.i++;

                break;

            case 2:
                cout << "Informe o nome do funcionario: ";
                cin >> nomeFunc;

                if(control.existePagamentoFunc(nomeFunc) == true)
                    cout << "Existe pagamento para este funcionario " << nomeFunc << endl;
                else
                    cout << "Nao existe pagamento para este funcionario." << endl;
                break;

            case 3:
                cout << "\nO total de pagamentos eh: " << control.calculaTotalDePagamentos() << endl;
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
