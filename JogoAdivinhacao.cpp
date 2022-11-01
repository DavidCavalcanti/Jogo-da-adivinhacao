#include <iostream>
using namespace std;

int main(){
    cout << "*************************************" << endl;
    cout << "* Bem-vindos ao jogo da adivinhacao *" << endl;
    cout << "*************************************" << endl << endl;

    int numero_secreto = 42;
    int chute;    

    cout << "Qual seu chute? ";
    cin >> chute;
    cout << "Seu chute foi " << chute << endl;

    if(chute == numero_secreto){
        cout << "Parabens! Voce acertou o numero secreto!" << endl;
    }
    else if (chute > numero_secreto){
        cout << "Seu chute foi maior que o numero secreto!" << endl;
    }
    else{
        cout << "Seu chute foi menor que o numero secreto!" << endl;
    }
}