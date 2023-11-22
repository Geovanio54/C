#include <iostream>
using namespace std;

int main()
{
    char varChar1 = 'A';
    char varChar2 = '\t';
    char varChar3 = 'C';

    cout << varChar1;
    cout << varChar2;
    varChar1 = 'B';
    cout << varChar1 << endl;
    cout << varChar3 << endl << endl; 

    return 0;
}
