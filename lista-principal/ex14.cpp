#include <iostream>

using namespace std;

int main() {
    int num1,num2;
    float maior;
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
    maior = num1 > num2 ? num1 : num2;
    cout << "Maior número: " << maior;
}