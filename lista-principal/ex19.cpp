#include <iostream>

using namespace std;

float capital, taxa, tempo;
float juros, montante;

main() {
    system("chcp 65001");
    
    cout << "Digite o valor do capital: ";
    cin >> capital;
    cout << "Digite a taxa de juros: ";
    cin >> taxa;
    cout << "Digite o tempo em dias: ";
    cin >> tempo;
    
    juros = capital * taxa * tempo / 365;
    montante = capital + juros;
    
    cout << "Capital: " << capital;
    cout << "Juros: " << juros;
    cout << "Montante: " << montante;
}

