#include <iostream>
using namespace std;

int main()
{
    cout << "*************************************" << endl;
    cout << "* Bem-vindos ao jogo da adivinhacao *" << endl;
    cout << "*************************************" << endl
         << endl;
    
    const int NUMERO_SECRETO = 42;
    bool nao_acertou = true;
    int tentativas = 0;

    double pontos = 1000.00;

    while (nao_acertou)
    {
        tentativas++;
        cout << "Tentativa " << tentativas << endl;

        int chute;
        cout << "Qual seu chute? ";
        cin >> chute;
        
        double ponto_perdidos = abs(chute - NUMERO_SECRETO)/2.0;
        pontos = pontos - ponto_perdidos;

        cout << "Seu chute foi " << chute << endl;
        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        if (acertou)
        {
            cout << "Parabens! Voce acertou o numero secreto!" << endl;
            nao_acertou = false;
        }
        else if (maior)
        {
            cout << "Seu chute foi maior que o numero secreto!" << endl;
        }
        else
        {
            cout << "Seu chute foi menor que o numero secreto!" << endl;
        }
        
    }

    cout << endl
         << "Fim do Jogo!" << endl;
    cout << "Voce acertou o numero secreto em " << tentativas << " tentativas." << endl;
    cout.precision(2);
    cout << fixed;
    cout << "Sua pontuacao foi de " << pontos << " pontos." << endl;
}