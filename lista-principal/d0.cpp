#include <iostream>
using namespace std;

main() {
  int anos, meses, dias;

  cout << "Digite a idade em anos: ";
  cin >> anos;

  meses = anos * 12;
  dias = anos * 365;

  cout << "A idade em meses é: " << meses << "\n";
  cout << "A idade em dias é: " << dias << "\n";
}
