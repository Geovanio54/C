#include <iostream>
#include <cmath> // biblioteca de matematica para C++
using namespace std;

// #include <math.h> biblioteca de matematica para C

int main()
{
    int n, raiz;

    cout << "Digite um numero: " << endl;
    cin >> n;

    raiz = sqrt(n); // raiz quadrada sqrt()

    /* 
    
    pow(double, double) --> potênciação

    abs(int) --> Informa o número absoluto:

    sin( double * pi / 180 ) --> informa o seno de um ângulo
    cos( double * pi / 180 ) --> informa o cosseno de um ângulo
    tan( double * pi / 180 ) --> informa a tangente de um ângulo

    sqrt( double ) --> Informa a raiz quadrada de um número

    ceil( T ) --> Arrendonda um número para cima: ceil( 2.1f ); // 3 
    cbrt( T ) --> Informa a raiz cúbica de um número: cbrt( 27 ); // 3
    log( double ) --> Calcula o logaritmo.

    */

    cout << "A raiz quadrata de " << n << " é " << raiz << endl;

    return 0;
}
