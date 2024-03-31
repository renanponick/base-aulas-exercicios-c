#include <iostream>

using namespace std;

int numNegativos = 0, num;

main() {
    system("chcp 65001");
    for (int i = 1; i <= 10; i++) {
        cout << "Digite o " << i << "º número: ";
        cin >> num;
        if (num < 0) {
            numNegativos++;
        }
    }
    cout << "O número de números negativos é: " << numNegativos;
}

