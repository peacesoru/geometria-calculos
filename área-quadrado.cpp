#include <iostream>
#include <stdio.h>

using namespace std;

int calculo(int num1, int num2){
    return num1 * num2;
}

int main(void){

    system("clear"); // Caso possua um sistema operacional Windows, mude o "clear" para "cls".

    int lado1, lado2;
    
    cout << "[*] Calcula a área de um Quadrado!\n\n";

    cout << "[/] Digite o primeiro lado: ";
    cin >> lado1;
    cout << "\n[/] Digite o segundo lado: ";
    cin >> lado2;

    system("clear"); // Caso possua um sistema operacional Windows, mude o "clear" para "cls".

    cout << "[*] Resultado da operação.\n\n";

    int result = calculo(lado1, lado2);

    cout << "[/] Área: " << result << endl << endl;
}