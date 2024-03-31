#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;
    if (num >= 0) {
        cout << "Número positivo";
    } else {
        cout << "Número negativo";
    }    
}