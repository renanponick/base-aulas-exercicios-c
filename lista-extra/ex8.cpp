#include <iostream>
using namespace std;

int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

int divisao(int a, int b) {
    return a / b;
}

int realizarOperacao(char operador, int a, int b) {
    switch(operador) {
        case '+':
            return soma(a, b);
        case '-':
            return subtracao(a, b);
        case '*':
            return multiplicacao(a, b);
        case '/':
            return divisao(a, b);
        default:
            return 0;
    }
}

main() {
    int a, b;
    char operador;
    cout << "Digite dois numeros inteiros: ";
    cin >> a >> b;
    cout << "Digite o operador (+, -, * ou /): ";
    cin >> operador;
    cout << "Resultado: " << realizarOperacao(operador, a, b);
}
