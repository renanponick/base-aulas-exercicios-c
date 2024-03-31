#include <iostream>
using namespace std;

int main() {
  const float salario_minimo = 1300.0;
  int cpf;
  int num_dependentes;
  float renda_mensal, renda_liquida, desconto_dependentes, aliquota, imposto;

  cout << "Digite o CPF do contribuinte: ";
  cin >> cpf;
  cout << "Digite o número de dependentes: ";
  cin >> num_dependentes;
  cout << "Digite a renda mensal do contribuinte em reais: ";
  cin >> renda_mensal;

  // calcula o valor do desconto dos dependentes
  desconto_dependentes = num_dependentes * (0.05 * salario_minimo);

  // calcula a renda líquida do contribuinte
  renda_liquida = renda_mensal - desconto_dependentes;

  // determina a alíquota de acordo com a renda líquida
  if(renda_liquida <= 2 * salario_minimo) {
    aliquota = 0.0;
  } else if(renda_liquida <= 3 * salario_minimo) {
    aliquota = 0.05;
  } else if(renda_liquida <= 5 * salario_minimo) {
    aliquota = 0.1;
  } else if(renda_liquida <= 7 * salario_minimo) {
    aliquota = 0.15;
  } else {
    aliquota = 0.2;
  }

  // calcula o valor do imposto a ser pago
  imposto = renda_liquida * aliquota;

  // exibe os resultados
  cout << "CPF: " << cpf << "\n";
  cout << "Número de dependentes: " << num_dependentes << "\n";
  cout << "Renda mensal: R$" << renda_mensal << "\n";
  cout << "Desconto dos dependentes: R$" << desconto_dependentes << "\n";
  cout << "Renda líquida: R$" << renda_liquida << "\n";
  cout << "Alíquota: " << (aliquota * 100) << "%" << "\n";
  cout << "Imposto devido: R$" << imposto << "\n";
}
