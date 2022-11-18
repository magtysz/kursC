#include <iostream>
using namespace std;

// Przyjmij 2 liczby N i K, a następnie wypisz, czy N jest podzielne przez K. Pamiętaj, że nie chcemy dzielić przez 0! ;)

int main()
{
	
	
	int a;
	int b;
	cout << "Podaj liczbe a" << endl;
	cin >> a;
	cout << "Podaj liczbe b" << endl;
	cin >> b;
	
		if (a % b == 0 && b != 0)
			cout << "Liczba " << a << " jest podzielna przez " << b << endl;
		else 
			cout <<  "Liczba " << a << " nie jest podzielna przez " << b << endl;
	


}