#include <iostream>
using namespace std;

int main()
{
    float x;

    cout << "Digite um numero: " << endl;
    cin >> x;

    x += 2; // x = x + 2
    cout << "Resultado apos x += 2 --> " << x << endl;

    x -= 2; // x = x - 2
    cout << "Resultado apos x -= 2 --> " << x << endl;

    x *= 2; // x = x * 2
    cout << "Resultado apos x *= 2 --> " << x << endl;

    x /= 2; // x = x / 2
    cout << "Resultado apos x /= 2 --> " << x << endl;

    return 0;
}
