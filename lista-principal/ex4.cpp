#include <iostream>
using namespace std;

main() {
  float celsius, fahrenheit;

  cout << "Digite a temperatura em Celsius: ";
  cin >> celsius;

  fahrenheit = (9 * celsius + 160) / 5;

  cout << "A temperatura em Fahrenheit é: " << fahrenheit;
}
