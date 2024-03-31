#include <iostream>

using namespace std;

int num;

main() {
    system("chcp 65001");
    do {
        cout << "Digite um número: ";
        cin >> num;
        if (num == 1) {
            cout << "Batata";
        }
    } while (num == 1);
}

