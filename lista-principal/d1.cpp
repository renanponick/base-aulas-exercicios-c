#include <iostream>
using namespace std;

main() {
  int a, b;

  cout << "Digite o valor de A: ";
  cin >> a;

  cout << "Digite o valor de B: ";
  cin >> b;

  cout << "Valores antes da troca: A = " << a << ", B = " << b << "\n";

  int aux = a;
  a = b;
  b = aux;

  cout << "Valores depois da troca: A = " << a << ", B = " << b << "\n";
}
