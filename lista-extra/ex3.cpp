#include <iostream>
using namespace std;

main() {
  float base, altura;

  cout << "Digite a base do triângulo: ";
  cin >> base;

  cout << "Digite a altura do triângulo: ";
  cin >> altura;

  float area = (base * altura) / 2;

  cout << "A área do triângulo é: " << area;
}
