#include <iostream>
using namespace std;

int main()
{
    cout << "*************************************" << endl;
    cout << "* Bem-vindos ao jogo da adivinhacao *" << endl;
    cout << "*************************************" << endl
         << endl;

    char dificuldade;
    do
    {
        cout << "Escolha o seu nivel de dificuldade: " << endl;
        cout << "Facil - (F)\n Medio(M)\n Dificil(D)" << endl;
        cin >> dificuldade;
    } while (dificuldade != 'F' && dificuldade != 'M' && dificuldade != 'D');

    int numero_de_tentativas;

    if (dificuldade == 'F')
    {
        numero_de_tentativas = 15;
    }
    else if (dificuldade == 'M')
    {
        numero_de_tentativas = 10;
    }
    else
    {
        numero_de_tentativas = 5;
    }

    cout << numero_de_tentativas << endl;

    const int NUMERO_SECRETO = 42;
    bool nao_acertou = true;
    int tentativas = 0;

    double pontos = 1000.00;

    for (tentativas = 1; tentativas <= numero_de_tentativas; tentativas++)
    {
        int chute;
        cout << "Tentativa " << tentativas << endl;
        cout << "Qual seu chute? ";
        cin >> chute;

        double ponto_perdidos = abs(chute - NUMERO_SECRETO) / 2.0;
        pontos = pontos - ponto_perdidos;

        cout << "Seu chute foi " << chute << endl;
        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        if (acertou)
        {
            cout << "Parabens! Voce acertou o numero secreto!" << endl;
            nao_acertou = false;
            break;
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
    if (nao_acertou)
        cout << "Voce perdeu! Tente novamente!" << endl;
    else
    {
        cout << "Voce acertou o numero secreto em " << tentativas << " tentativas." << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuacao foi de " << pontos << " pontos." << endl;
    }
}