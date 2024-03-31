#include <iostream>
using namespace std;

main() {
  float valorHora, horasTrabalhadas, salario;

  cout << "Digite o valor da hora trabalhada: ";
  cin >> valorHora;

  cout << "Digite a quantidade de horas trabalhadas: ";
  cin >> horasTrabalhadas;

  salario = valorHora * horasTrabalhadas;

  cout << "O salário do trabalhador é: " << salario;
}
