#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Digite um número inteiro: ";
    cin >> num;
    
    if(num > 0){
        cout << "O número " << num << " é positivo.";
    } else if(num < 0){
        cout << "O número " << num << " é negativo.";
    } else {
        cout << "O número digitado é zero.";
    }
    
    return 0;
}
