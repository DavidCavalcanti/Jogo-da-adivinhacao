#include <iostream>
using namespace std;

int main(){
    cout << "*************************************" << endl;
    cout << "* Bem-vindos ao jogo da adivinhacao *" << endl;
    cout << "*************************************" << endl << endl;

    const int NUMERO_SECRETO = 42;
    int chute;    
    bool acertou, maior;

    cout << "Qual seu chute? ";
    cin >> chute;
    cout << "Seu chute foi " << chute << endl;

    acertou = chute == NUMERO_SECRETO;
    maior = chute> NUMERO_SECRETO;

    if(acertou){
        cout << "Parabens! Voce acertou o numero secreto!" << endl;
    }
    else if (maior){
        cout << "Seu chute foi maior que o numero secreto!" << endl;
    }
    else{
        cout << "Seu chute foi menor que o numero secreto!" << endl;
    }
}