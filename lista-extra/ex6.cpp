#include <iostream>
using namespace std;

int main() {
  float raio;

  cout << "Digite o raio da circunferência: ";
  cin >> raio;

  float diametro = raio * 2;
  float circunferencia = 2 * 3.1415 * raio;
  float area = 3.1415 * raio * raio;

  cout << "O diâmetro da circunferência é: " << diametro << "\n";
  cout << "A circunferência da circunferência é: " << circunferencia << "\n";
  cout << "A área da circunferência é: " << area << "\n";
}
