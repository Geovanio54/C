#include <iostream>
using namespace std;

int main()
{

    int x, y;
    x = 6;
    y = 2;

    cout << "O valor de x e y é " << x << " e " << y << " repectivamente" << endl;
    cout << "\tA adição de x e y é " << x + y << endl;
    cout << "\tA subtração de x e y é " << x - y << endl;
    cout << "\tA multiplicação de x e y é " << x * y << endl; 
    cout << "\tResto da divisão de x e y " << x % y << endl; 

    // % só funciona se a variavel for do tipo inteiro. Caso contrario ele não faz modulo(%)
    // mais se colocar o valor direto ele consegue fazer o modulo
    // Ex 5 / 2 == 2.5           Ex 5 % 2 == 1

    // \t da um TAB no seu código
    // \n quebra a linha do seu código

    double z = x / y;

    cout << "\tA divição de x e y é " << z << endl;

    return 0;
}
