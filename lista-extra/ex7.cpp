#include <iostream>
using namespace std;

void imprimirDiaSemana(int dia) {
    switch(dia) {
        case 1:
            cout << "Domingo";
            break;
        case 2:
            cout << "Segunda-feira";
            break;
        case 3:
            cout << "Terca-feira";
            break;
        case 4:
            cout << "Quarta-feira";
            break;
        case 5:
            cout << "Quinta-feira";
            break;
        case 6:
            cout << "Sexta-feira";
            break;
        case 7:
            cout << "Sabado";
            break;
        default:
            cout << "Dia invalido";
            break;
    }
}

main() {
    int dia;
    cout << "Digite um numero entre 1 e 7: ";
    cin >> dia;
    imprimirDiaSemana(dia);
}
