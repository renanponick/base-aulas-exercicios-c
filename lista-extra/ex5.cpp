#include <iostream>
using namespace std;

main() {
  float nota1, nota2, nota3;

  cout << "Digite a primeira nota: ";
  cin >> nota1;

  cout << "Digite a segunda nota: ";
  cin >> nota2;

  cout << "Digite a terceira nota: ";
  cin >> nota3;

  float media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;

  cout << "A média final do aluno é: " << media;
}
