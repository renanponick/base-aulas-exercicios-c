#include <iostream>

using namespace std;
int numero_um;
int numeroUm;
int NumeroUm;

int main() {
    // Exercício 9
    float nota1, nota2, nota3, media;
    cout << "Digite a primeira nota: ";
    cin >> nota1;
    cout << "Digite a segunda nota: ";
    cin >> nota2;
    cout << "Digite a terceira nota: ";
    cin >> nota3;
    media = (nota1 + nota2 + nota3) / 3.0;
    cout << "Média: " << media<<"\n";

    if (media >= 7) {        
        cout << "Aprovado"<<"\n";
    } else if (media > 5 && media < 7 ) {
        cout << "Recuperação";
    } else if (media > 0) {
        cout << "Reprovado";
    } else {
        cout << "Media invalida";
    }
    
    
    
    
    
    
    
    
    
    
    
     else if (media >= 5) {
        cout << "Recuperação"<<"\n";
    } else {
        cout << "Reprovado"<<"\n";
    }

}