#include <iostream>

using namespace std;

int peso, somaPeso = 0;
float mediaPeso;

main() {
    system("chcp 65001");
    for (int i = 1; i <= 5; i++) {
        cout << "Digite o peso da pessoa " << i << ": ";
        cin >> peso;
        somaPeso += peso;
    }
    mediaPeso = somaPeso / 5.0;
    cout << "A média de peso das pessoas é: " << mediaPeso;
}

