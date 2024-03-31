#include <iostream>

using namespace std;

int numeros[15];

main() {
    system("chcp 65001");
    
    // preenche o array com números aleatórios entre 1 e 100
    for (int i = 0; i < 15; i++) {
        numeros[i] = rand() % 100 + 1;
    }
    
    // imprime o array
    cout << "Numeros gerados aleatoriamente: ";
    for (int i = 0; i < 15; i++) {
        cout << numeros[i] << " ";
    }
}

