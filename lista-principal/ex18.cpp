#include <iostream>

using namespace std;

float custo_fabrica;
float percentagem_distribuidor = 0.28;
float percentagem_impostos = 0.45;
float custo_consumidor;

main() {
    
    cout << "Digite o custo de fabrica do carro: ";
    cin >> custo_fabrica;
    
    custo_consumidor = custo_fabrica * (1 + percentagem_distribuidor + percentagem_impostos);
    
    cout << "O custo ao consumidor do carro e: " << custo_consumidor;

}

