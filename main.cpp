#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
    Data d1;
    cout << "Digite o dia: " << endl;
    cin >> d1.dia;
    cout << "Digite o mes: " << endl;
    cin >> d1.mes;
    cout << "Digite o ano: " << endl;
    cin >> d1.ano;
    d1.avancarDia();
    if(d1.dia > 31 || d1.dia < 1 || d1.mes > 12){
        cout << "Data incorreta!" << endl;
    }
    else {
    cout << d1.dia << "/" << d1.mes << "/" << d1.ano << endl;
    }
    return 0;
}
