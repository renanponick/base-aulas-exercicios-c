#include <iostream>
#include <string>

using namespace std;

string nomeDaFruta(int num) {
    string fruta;
    switch (num) {
        case 1:
            fruta = "Maçã";
            break;
        case 2:
            fruta = "Banana";
            break;
        case 3:
            fruta = "Laranja";
            break;
        case 4:
            fruta = "Pera";
            break;
        case 5:
            fruta = "Manga";
            break;
        default:
            fruta = "Opção inválida";
            break;
    }
    return fruta;
}

int main() {
    int num;
    cout << "Digite um número de 1 a 5: ";
    cin >> num;
    cout << "A fruta correspondente é: " << nomeDaFruta(num);
}
