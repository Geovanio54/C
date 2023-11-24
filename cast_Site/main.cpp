#include <iostream> 
#include <typeinfo> 
using namespace std; 

int main() 
{ 

	int numeroInteiro = 10; 

	// converting int to double 
	double numeroDouble = static_cast<double>(numeroInteiro); 

	// printing data type 
	cout << "Valor do numeroInteiro " << numeroInteiro << " tipo de dados " << typeid(numeroInteiro).name() << endl; 

	// typecasting 
	cout << "Valor do numeroInteiro " << numeroInteiro << " convertido para double, tipo de dados " << typeid(static_cast<double>(numeroInteiro)).name() << endl; 

	// printing double type t 
	cout << "Valor do numeroDouble " << numeroDouble << " tipo de dados " << typeid(numeroDouble).name() << endl; 

	return 0; 
}
