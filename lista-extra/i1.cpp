#include <iostream>
#include <string>

using namespace std;

// Função para converter um número decimal para binário
string dec2bin(int num) {
    string binario = "";
    while (num > 0) {
        int resto = num % 2;
        binario = to_string(resto) + binario;
        num = num / 2;
    }
    return binario;
}

// Função para converter um número decimal para octal
string dec2oct(int num) {
    string octal = "";
    while (num > 0) {
        int resto = num % 8;
        octal = to_string(resto) + octal;
        num = num / 8;
    }
    return octal;
}

// Função para converter um número decimal para hexadecimal
string dec2hex(int num) {
    string hex = "";
    while (num > 0) {
        int resto = num % 16;
        if (resto < 10) {
            hex = to_string(resto) + hex;
        } else {
            hex = (char)('A' + resto - 10) + hex;
        }
        num = num / 16;
    }
    return hex;
}

main() {
    int num, base;
    cout << "Digite um número decimal: ";
    cin >> num;
    cout << "Digite a base desejada (2 para binário, 8 para octal, 16 para hexadecimal): ";
    cin >> base;
    switch (base) {
        case 2:
            cout << "O número " << num << " em binário é: " << dec2bin(num);
            break;
        case 8:
            cout << "O número " << num << " em octal é: " << dec2oct(num);
            break;
        case 16:
            cout << "O número " << num << " em hexadecimal é: " << dec2hex(num);
            break;
        default:
            cout << "Base inválida!";
            break;
    }
}
