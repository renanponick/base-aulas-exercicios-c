#include <iostream>

using namespace std;

int quantidade;
float altura, somaAltura = 0;

main() {
    system("chcp 65001");
    cout << "Digite a quantidade de pessoas: ";
    cin >> quantidade;
    for (int i = 1; i <= quantidade; i++) {
        cout << "Digite a altura da pessoa " << i << ": ";
        cin >> altura;
        somaAltura += altura;
    }
    cout << "A média de altura das pessoas é: " << somaAltura / quantidade << endl;
    
}

