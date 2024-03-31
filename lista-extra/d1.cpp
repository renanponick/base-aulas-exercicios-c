#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite um número inteiro: ";
    cin >> num;
    
    if(num % 2 == 0){
        cout << "O número " << num << " é par.";
    } else {
        cout << "O número " << num << " é ímpar.";
    }
}
