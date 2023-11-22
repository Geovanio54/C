#include <iostream>
using namespace std;

int main()
{
    float Pi = 3.14159;
    float raio;

    cout << "Digite o valor do raio da esfera: " << endl;
    cin >> raio;
    float volume = 4/3*Pi*raio*raio*raio;
    cout << "O volume da esfera é " << volume << endl; 
    return 0;
}
