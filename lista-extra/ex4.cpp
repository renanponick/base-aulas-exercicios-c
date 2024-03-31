#include <iostream>
using namespace std;

main() {
  float base, altura, comprimento;

  cout << "Digite a base do retângulo: ";
  cin >> base;

  cout << "Digite o comprimento do retângulo: ";
  cin >> comprimento;

  cout << "Digite a altura do retângulo: ";
  cin >> altura;

  float area = base * altura * comprimento;

  cout << "A área do retângulo é: " << area;
}
