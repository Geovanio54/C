#include <iostream>
using namespace std;

int main()
{

    float x, y;
    x = 5;
    y = 2;

    cout << "O valor de x e y é " << x << " e " << y << " repectivamente" << endl;
    cout << "\tA adição de x e y é " << x + y << endl;
    cout << "\tA subtração de x e y é " << x - y << endl;
    cout << "\tA multiplicação de x e y é " << x * y << endl; 

    // \t da um TAB no seu código
    // \n quebra a linha do seu código

    double z = x / y;

    cout << "\tA divição de x e y é " << z << endl;

    return 0;
}
