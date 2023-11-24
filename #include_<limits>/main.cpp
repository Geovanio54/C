#include <iostream>
#include <limits>
using namespace std;

int main()
{
    cout << "Limite inferior de <char> " << (int)numeric_limits<char>::min() << endl;
    cout << "Limite superior de <char> " << (int)numeric_limits<char>::max() << endl;
    cout << "Numero de Bytes de <char> " << sizeof(char) << endl << endl;

    cout << "Limite inferior de <short> " << numeric_limits<short>::min() << endl;
    cout << "Limite superior de <short> " << numeric_limits<short>::max() << endl;
    cout << "Numero de Bytes de <short> " << sizeof(short) << endl << endl;

    cout << "Limite inferior de <int> " << numeric_limits<int>::min() << endl;
    cout << "Limite superior de <int> " << numeric_limits<int>::max() << endl;
    cout << "Numero de Bytes de <int> " << sizeof(int) << endl << endl;

    cout << "Limite inferior de <long> " << numeric_limits<long>::min() << endl;
    cout << "Limite superior de <long> " << numeric_limits<long>::max() << endl;
    cout << "Numero de Bytes de <long> " << sizeof(long) << endl << endl;

    cout << "Limite inferior de <float> " << numeric_limits<float>::min() << endl;
    cout << "Limite superior de <float> " << numeric_limits<float>::max() << endl;
    cout << "Numero de Bytes de <float> " << sizeof(float) << endl << endl;

    cout << "Limite inferior de <double> " << numeric_limits<double>::min() << endl;
    cout << "Limite superior de <double> " << numeric_limits<double>::max() << endl;
    cout << "Numero de Bytes de <double> " << sizeof(double) << endl << endl;

    return 0;
}
