#include <iostream>
using namespace std;

bool ehVogal(char letra) {
    switch(letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return true;
        default:
            return false;
    }
}

main() {
    char letra;
    cout << "Digite uma letra: ";
    cin >> letra;
    if (ehVogal(letra)) {
        cout << "A letra " << letra << " eh uma vogal";
    } else {
        cout << "A letra " << letra << " eh uma consoante";
    }
}
