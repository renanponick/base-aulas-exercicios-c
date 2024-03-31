#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

string alunos[36] = {
    "ALEXANDRE SALVADOR",
    "AMANDA ROSA ",
    "ANGELICA IANECZEK BENTO",
    "ARTHUR DANTE BIZ TRAPP",
    "BRUNA DE SOUZA KRAUSE",
    "CRISLEINE CAVILHA PINTO ",
    "DJALMA HIDEKI YAMAMOTO",
    "EDIVALDO DA SILVA ",
    "FLÁVIO MASCARENHAS DOS SANTOS ",
    "FRANCISCO FERNANDO REIS SILVA ",
    "GABRIEL COSTIN CHAIKOSKY",
    "GUSTAVO HENRIQUE BUTZKE",
    "GUSTAVO HENRIQUE CORDEIRO ",
    "GUSTAVO HENRIQUE PEDRINI SILVA",
    "HEBERT LUIZ ROMERO CAMARLENGO BARBOSA",
    "IGOR ROBERTO SENA PAES",
    "JEAN RICARDO VITORIO",
    "JOÃO VICTOR FUCKNER PIRES",
    "JOÃO VITOR FERREIRA DOS SANTOS",
    "JONICLEI BERNARDO JUNIOR",
    "JUAN RODRIGO HABITZREUTER",
    "LUCAS BERNARDO VELLOSO",
    "LUCAS LEONI",
    "LUCAS MASAO SAKAI",
    "LYSIA PINHEIRO FREITAS",
    "MAIARA RIBEIRO FREITAS",
    "MARCOS DE QUADROS SILVEIRA",
    "MATHEUS DA COSTA CIDRAL",
    "PABLO RICARDO PAUL",
    "RAPHAEL ALEXSANDRO DE SOUZA BARROS",
    "RHUAN DAVYD PINTO",
    "STÉEFANNY CASTRO PIRES ",
    "TIAGO DE SOUZA RIBEIRO DOS SANTOS",
    "WILLIAMS JOSE SILVA DOS SANTOS",
    "WLADIMIR WILLIAM CEZARIO DA SILVA",
    "YURI HASSEL"
};

main() {
    // inicializa o gerador de numeros aleatorios
    srand(time(NULL));
    
    int vetor[5];
    for(int i=0; i <= 35; i++){
        vetor[0] = rand() % 7 + 2;      // numeros entre 2 e 8
        vetor[1] = rand() % 8 + 9;      // numeros entre 9 e 16
        vetor[2] = rand() % 6 + 17;     // numeros entre 17 e 22
        vetor[3] = rand() % 6 + 23;     // numeros entre 23 e 28
        vetor[4] = rand() % 6 + 24;     // numeros entre 24 e 29
        
        // imprime o vetor
        cout << "\n" << alunos[i] <<" - "; 
        for (int j = 0; j < 5; j++) {
            cout << vetor[j] << " ";
        }
    
    }
        cout << "\n\n\n";
}
