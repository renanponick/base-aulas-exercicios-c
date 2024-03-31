#include <iostream>

using namespace std;

int tabuada;

main() {
    system("chcp 65001");
    cout << "Digite um número para a tabuada: ";
    cin >> tabuada;
    for (int i = 0; i <= 10; i++) {
        cout << tabuada << " x " << i << " = " << tabuada * i << endl;
    }
}

