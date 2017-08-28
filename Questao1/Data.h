#ifndef DATA_H
#define DATA_H


class Data
{
    public:
        int dia;
        int mes;
        int ano;
        Data();
        virtual ~Data();
        void avancarDia();
};

#endif // DATA_H
