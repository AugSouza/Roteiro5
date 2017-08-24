#include "Data.h"
#include <iostream>

using namespace std;

Data::Data()
{

}

void Data::avancarDia(){
    if(mes == 2){
        if(dia > 28){
        cout << "Dia incorreto, digite novamente!" <<endl;
        }
        else if(dia == 28){
                dia = 1;
                mes = 3;
                return;
        }
        else{
            dia++;
        }
    }
        if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
            if(dia == 30){
                dia = 1;
                mes++;

            }
            else{
                dia++;
            }
        }
        else if(mes == 12){
            if(dia == 31){
            dia = 1;
            mes = 1;
            ano++;
            return;
            }
        }
        else if(dia == 31){
                dia++;
                mes++;
            }
            else{
                dia++;
            }
}

Data::~Data()
{
    //dtor
}
