#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Digite três números: ";
    cin >> num1;
    cin >> num2;
    cin >> num3;

    if (num1 <= num2 && num1 <= num3) {
        cout << "O menor número é: " << num1;
    } else if (num2 <= num1 && num2 <= num3) {
        cout << "O menor número é: " << num2;
    } else {
        cout << "O menor número é: " << num3;
    }
}
