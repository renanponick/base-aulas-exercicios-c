#include <iostream>
using namespace std;

main() {
  int duracao, horas, minutos, segundos;

  cout << "Digite a duração do evento em segundos: ";
  cin >> duracao;

  horas = duracao / 3600;
  minutos = (duracao % 3600) / 60;
  segundos = duracao % 60;

  cout << "A duração do evento é: " << horas << "h " << minutos << "min " << segundos << "s";
}
