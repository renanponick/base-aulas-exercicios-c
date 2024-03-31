#include <iostream>

using namespace std;

int pesoElevador = 0, pessoa = 1, pesoPessoa;

main() {
    system("chcp 65001");
    while (pesoElevador < 180 && pessoa <= 10) {
        cout << "Digite o peso da pessoa " << pessoa << ": ";
        cin >> pesoPessoa;
        pesoElevador += pesoPessoa;
        pessoa++;
    }
    if (pesoElevador >= 180) {
        cout << "O elevador atingiu o peso máximo." << endl;
    }
}

