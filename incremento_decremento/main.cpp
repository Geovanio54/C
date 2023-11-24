#include <iostream>
using namespace std;

int main()
{
    float x;
    cout << "Digite um numero: " << endl;
    cin >> x;

    cout << "Resultado apos ++x " << ++x << endl; // prefix

    cout << "Valor atual de x " << x << endl;

    cout << "Resultado apos x++ " << x++ << endl; // postfix

    cout << "Resultado apos x-- " << x-- << endl;

    cout << "valo atual de x " << x << endl;

    return 0;
}
