#include <iostream>
#include <stdlib.h> //lib para limpar a tela
#include <locale.h> //lib para passar para português
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese"); //Atribuição do portugues
    //Minha mensagem no menu, endl significa quebra da linha
    int valor;
    cout << "Minha *Calculadora* de Bases" << endl;
    cout << "Informe uma das opções" << endl;
    cout << "1- Decimal para Binário" << endl;
    cout << "2- Binário para Decimal" << endl;

    //Aqui faço a leitura do valor digitado
    cin >> valor;
    system("clear||cls");// Aqui limpo a tela
    //cout << endl << "O valor digitado foi: " << valor << endl;
    if(valor == 1){
        int decimal;
        cout << "1 - Conversão de Decimal para Binário " << endl;
        cin >> decimal;
        cout << endl << "O valor decimal foi: " << decimal << endl;
    }else{
        if(valor == 2){
            int binario;
            cout << "2 - Conversão de Binário para Decimal" << endl;
            cin >> binario;
            cout << endl << "O valor decimal foi: " << binario << endl;
        }else{
            cout << "Favor entre com um valor válido!!! " << endl;
        }
    }
    return 0;
}
