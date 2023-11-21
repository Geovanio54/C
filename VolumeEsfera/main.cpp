#include <iostream>
#define PI 3.14159

int main()
{
    int raio = 5;

    float volume = (4/3)*PI*raio*raio*raio;

    std::cout << "O volume da esfera com raio " << raio << " é " << volume << std::endl;

    return 0;
}
