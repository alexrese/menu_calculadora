#include <iostream>
#include <stdlib.h> //lib para limpar a tela
#include <locale.h> //lib para passar para português
#include <math.h> //lib para potencia

using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese"); //Atribuição do portugues
    //Minha mensagem no menu, endl significa quebra da linha
    int valor;
    bool executa = true;
    int bin[8];

    while (executa)
    {
        system("clear||cls");
        cout << "Minha *Calculadora* de Bases" << endl;
        cout << "Informe uma das opções" << endl;
        cout << "1- Decimal para Binário" << endl;
        cout << "2- Binário para Decimal" << endl;
        cout << "0- Para sair" << endl;

        //Aqui faça a leitura do valor digitado
        cin >> valor;

        system("clear||cls"); // Aqui limpo a tela
        if (valor == 0)       //Se o valor digitado por 0 então encerra o loop
        {
            executa = false;
            exit;
        }
        else
        {
            if (valor == 1)
            {
                int decimal;
                cout << "1 - Conversão de Decimal para Binário " << endl;
                cin >> decimal; //Pega o valor em decimal
                for (int i = 7; i >= 0; i--)
                {
                    if (decimal % 2 == 0) //Se o valor decimal mod 2 igual a 0, preenche na posição do array
                    {
                        bin[i] = 0;
                    }
                    else
                    { //Senão preenche com  na posição do array
                        bin[i] = 1;
                    }
                    decimal = decimal / 2; // divide o decimal por 2
                }
                //Imprime em tela
                for (int i = 0; i < 8; i++)
                {
                    cout << bin[i];
                }
                cout << endl << "Digite um número para continuar" << endl;
                cin >> valor;
            }
            else
            {
                if (valor == 2)
                {
                    int binario;
                    int dec = 0; 
                    cout << "2 - Conversão de Binário para Decimal" << endl;
                    cin >> binario;
                    for (int i = 0; binario > 0; i++) //aqui utilizamos o número total do binário
                    {
                        dec = dec + pow(2, i) * (binario % 10); //elevamos ao quadrado o indice e multiplicamos pelo modulo do número binário
                        binario = binario / 10; //dividimos o número binário por 10
                    }
                    cout << dec;
                    cout << endl << "Digite um número para continuar" << endl;
                    cin >> valor;
                }
                else
                {
                    cout << "Favor entre com um valor válido!!! " << endl;
                }
            }
        }
    }
    return 0;
}
