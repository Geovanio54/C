#include <iostream>
#define PI 3.14159

int main()
{
    int raio = 4;

    float area = PI*raio*raio;

    std::cout << "A área da esfera com o raio " << raio << " é " << area << std::endl;
    
    return 0;
}
