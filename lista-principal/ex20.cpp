#include <iostream>

using namespace std;

float ipi, valor1, valor2, quant1, quant2;
float valor_total;
int codigo1, codigo2;

main() {
    system("chcp 65001");
    
    cout << "Digite a percentagem do IPI: ";
    cin >> ipi;
    cout << "Digite o codigo da peca 1: ";
    cin >> codigo1;
    cout << "Digite o valor unitario da peca 1: ";
    cin >> valor1;
    cout << "Digite a quantidade de pecas 1: ";
    cin >> quant1;
    cout << "Digite o codigo da peca 2: ";
    cin >> codigo2;
    cout << "Digite o valor unitario da peca 2: ";
    cin >> valor2;
    cout << "Digite a quantidade de pecas 2: ";
    cin >> quant2;
    
    valor_total = (valor1 * quant1 + valor2 * quant2) * (ipi / 100 + 1);
    
    cout << "O valor total a ser pago e: " << valor_total;
}

