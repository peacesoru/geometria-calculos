#include <iostream>
#include <stdio.h>
#define pi 3.14

using namespace std;

int calculo(int num1){ // Declarando função da formúla do calculo.
    int r = num1 * num1;
    return r * pi;
}

int main(void){
    system("clear"); // Caso possua um sistema operacional Windows, mude o "clear" para "cls".

    int raio;

    cout << "[*] Calcula a Área de um Círculo!\n\n";

    cout << "[*] Digite o raio do círculo: ";
    cin >> raio;
    system("clear"); // Caso possua um sistema operacional Windows, mude o "clear" para "cls".

    cout << "[*] Resultado da Área do Círculo!\n\n";

    int result = calculo(raio);

    cout << "[*] Área: " << result << endl << endl;

}
