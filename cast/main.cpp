#include <iostream>
#include <typeinfo> // biblioteca que retorna o tipo da variavel
using namespace std;

int main()
{
    short variavel1 = 30000; // tipo short -32768 a 32767

    cout << "Valor inicial da 'variavel1' é " << variavel1 << " e tipo " << typeid(variavel1).name() << " que é short" << endl;

    variavel1 = variavel1 + 30000;

    cout << "Novo valor da 'variavel1' é " << variavel1 << " ultrapassou o limite do tipo da variavel short " << typeid(variavel1).name() << endl;

    cout << "Valor da variavel1 " << variavel1 << " tipo da variavel1 " << typeid(variavel1).name() << endl;

    return 0;
}
