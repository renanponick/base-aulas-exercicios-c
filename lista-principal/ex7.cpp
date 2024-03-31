#include <iostream>
using namespace std;

main() {
  float quilometros, metros, centimetros;

  cout << "Digite a distância em quilômetros: ";
  cin >> quilometros;

  metros = quilometros * 1000;
  centimetros = metros * 100;

  cout << quilometros << " quilômetros correspondem a: \n";
  cout << metros << " metros \n";
  cout << centimetros << " centímetros";
}
