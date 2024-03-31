#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << "Número par" << "\n";
    } else {
        cout << "Número ímpar" << "\n";
    }
}