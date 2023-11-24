#include <iostream>
#include <typeinfo> // biblioteca que retorna o tipo da variavel
using namespace std;

int main()
{
    short variavel1 = 30000; // tipo short -32768 a 32767

    cout << "Valor inicial da 'variavel1' é " << variavel1 << " e tipo " << typeid(variavel1).name() << " que é short" << endl;

    variavel1 = variavel1 + 30000;

    cout << "Novo valor da 'variavel1' é " << variavel1 << " ultrapassou o limite do tipo da variavel short " << typeid(variavel1).name() << endl;

    variavel1 = 30000;

    int variavel2 ;

    variavel2 = (int)variavel1; // duas maneira de conversão var2 = var1  /  var2 = (int)var1

    variavel2 = variavel2 + 30000;

    cout << "Valor da variavel1 " << variavel1 << " tipo da variavel1 " << typeid(variavel1).name() << endl;
    cout << "Valor da variavel2 " << variavel2 << " tipo da variavel2 " << typeid(variavel2).name() << endl;

    return 0;
}
