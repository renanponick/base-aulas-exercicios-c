#include <iostream>
#include <string>

using namespace std;

string tipoCombustivel(int num) {
    string combustivel;
    switch (num) {
        case 1:
            combustivel = "Álcool";
            break;
        case 2:
            combustivel = "Gasolina";
            break;
        case 3:
            combustivel = "Diesel";
            break;
        default:
            combustivel = "Opção inválida";
            break;
    }
    return combustivel;
}

main() {
    int num;
    cout << "Digite um número de 1 a 3: ";
    cin >> num;
    cout << "O tipo de combustível correspondente é: " << tipoCombustivel(num);
}
