#include <iostream>
using namespace std;

main() {
  int a, b;

  cout << "Digite o valor de A: ";
  cin >> a;

  cout << "Digite o valor de B: ";
  cin >> b;

  if (a > b) {
    cout << "O maior número é: " << a;
  } else {
    cout << "O maior número é: " << b;
  }

  return 0;
}
