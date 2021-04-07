#include <iostream>
#include <stdio.h>

using namespace std;

int calculo(int num1, int num2){ // Declarando função da formúla do calculo.
    return num1 * num2 / 2; // A = b * h / 2.
}

int main (void) {
    system("clear"); // Caso possua um sistema operacional Windows, mude o "clear" para "cls".

    int base, altura;

    cout << "         A\n        AAA\n       AAAAA - [ Calcular área de um triângulo. ]\n      AAAAAAA\n     AAAAAAAAA \n\n";

    cout << "[*] Digite a base do triângulo: ";
    cin >> base;
    cout << "\n" << "[*] Digite a altura do triângulo: ";
    cin >> altura;

    system("clear"); // Caso possua um sistema operacional Windows, mude o "clear" para "cls".

    cout << "         A\n        AAA\n       AAAAA - [ Resultado da operação. ]\n      AAAAAAA\n     AAAAAAAAA \n\n";

    int result = calculo(base, altura);

    cout << "[*] Área: " << result << endl << endl;
}