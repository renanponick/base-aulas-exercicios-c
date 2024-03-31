#include <iostream>
using namespace std;

int aux;
int main() {
    for(int i = 0; i <= 3; i++) {
        
        for(int j = 0; j <= aux; j++){
            cout << '*';
        }
        cout << "\n";
        for(int j = 0; j <= aux+1; j++){
            cout << '*';
        }
        cout << "\n";
        for(int j = 0; j <= aux; j++){
            cout << '*';
        }

        cout << "\n";

        aux++;
    }
}
