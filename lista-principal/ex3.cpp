#include <iostream>
using namespace std;

main() {
  float peso1, peso2, peso3, peso4, peso5, media;

  cout << "Digite o peso da primeira pessoa: ";
  cin >> peso1;

  cout << "Digite o peso da segunda pessoa: ";
  cin >> peso2;

  cout << "Digite o peso da terceira pessoa: ";
  cin >> peso3;

  cout << "Digite o peso da quarta pessoa: ";
  cin >> peso4;

  cout << "Digite o peso da quinta pessoa: ";
  cin >> peso5;

  media = (peso1 + peso2 + peso3 + peso4 + peso5) / 5;

  cout << "A média de peso é: " << media;

  cout << "\n\n\n\n";
}
