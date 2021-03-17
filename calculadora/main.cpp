#include <iostream>
#include <stdlib.h> //lib para limpar a tela
#include <locale.h> //lib para passar para portugu�s
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese"); //Atribui��o do portugues
    //Minha mensagem no menu, endl significa quebra da linha
    int valor;
    bool executa = true;
    while (executa)
    {
        system("clear||cls");
        cout << "Minha *Calculadora* de Bases" << endl;
        cout << "Informe uma das op��es" << endl;
        cout << "1- Decimal para Bin�rio" << endl;
        cout << "2- Bin�rio para Decimal" << endl;
        cout << "0- Para sair" << endl;

        //Aqui fa�o a leitura do valor digitado
        cin >> valor;

        system("clear||cls"); // Aqui limpo a tela
                              //cout << endl << "O valor digitado foi: " << valor << endl;
        if (valor == 0)
        {
            executa = false;
            exit;
        }
        else
        {
            if (valor == 1)
            {
                int decimal;
                cout << "1 - Convers�o de Decimal para Bin�rio " << endl;
                cin >> decimal;
                cout << endl
                     << "O valor decimal foi: " << decimal << endl;
            }
            else
            {
                if (valor == 2)
                {
                    int binario;
                    cout << "2 - Convers�o de Bin�rio para Decimal" << endl;
                    cin >> binario;
                    cout << endl
                         << "O valor decimal foi: " << binario << endl;
                }
                else
                {
                    cout << "Favor entre com um valor v�lido!!! " << endl;
                }
            }
        }
    }
    return 0;
}
