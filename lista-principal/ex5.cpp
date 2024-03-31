#include <iostream>
using namespace std;

main() {
  float milhas, km;

  cout << "Digite a quantidade de milhas: ";
  cin >> milhas;

  km = milhas * 1.60934;

  cout << "A quantidade de quilômetros é: " << km;
}
