#include <iostream>

using namespace std;

int main() {
    float num1, num2, resultado;
    char operacao;
    cout << "Digite a operação (+, -, *, /): ";
    cin >> operacao;
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    if (operacao == '+') {
        resultado = num1 + num2;
    } else if (operacao == '-') {
        resultado = num1 - num2;
    } else if (operacao == '*') {
        resultado = num1 * num2;
    } else if (operacao == '/') {
        resultado = num1 / num2;
    }
    cout << "Resultado: " << resultado;
}