#include <iostream>

using namespace std;

int main() {
    // Exercício 10
    float h, peso_ideal;
    char genero;
    cout << "Digite a altura em metros: ";
    cin >> h;
    cout << "Digite o gênero (H para homem ou M para mulher): ";
    cin >> genero;
    if (genero == 'H') {
        peso_ideal = 72.7 * h - 58;
    } else if (genero == 'M') {
        peso_ideal = 62.1 * h - 44.7;
    }
    cout << "Peso ideal: " << peso_ideal;
    
}