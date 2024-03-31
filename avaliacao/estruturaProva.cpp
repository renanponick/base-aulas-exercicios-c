#include <iostream>

using namespace std;

main() {
    int op;
    system("chcp 65001");
    
    do{
        cout<<"\n \t Escolha uma opção a seguir: \n";
        cout<<"\n [1] Exercício 1";
        cout<<"\n [2] Exercício 2";
        cout<<"\n [3] Exercício 3";
        cout<<"\n [4] Exercício 4";
        cout<<"\n [5] Exercício 5";
        cout<<"\n [6] Use a sua criatividade";
        cout<<"\n [7] Encerrar \n";
        cin>>op;
        switch(op) {
            case 1: {
                break;
            };
            case 2: {
                break;
            };
            case 3: {
                break;
            };
            case 4: {
                break;
            };
            case 5: {
                break;
            };
            case 6: {
                cout<<"Sendo criativo";
                break;
            };
            case 7: {
                cout<<"Finalizando";
                break;
            };
            default:
                cout<<"\nOpção inválida";
                break;
        }
    }while(op != 6);
    cout<<"\n\n\n\n\n - Até mais \n\n\n\n\n";
}

