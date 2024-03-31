#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int a, b, c;

    cout << "Digite os valores de a, b e c: ";
    cin >> a;
    cin >> b;
    cin >> c;

    if (a + b > c && a + c > b && b + c > a) {
        double base, altura;

        cout << "Digite a base do triângulo: ";
        cin >> base;

        cout << "Digite a altura do triângulo: ";
        cin >> altura;

        double area = base * altura / 2.0;

        cout << "A área do triângulo é: " << area;
    }
    else {
        cout << "Os valores " << a << ", " << b << " e " << c << " não formam um triângulo.";
    }
}
