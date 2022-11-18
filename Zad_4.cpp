#include <iostream>
using namespace std;

//Przyjmij liczby A i B, a następnie wpisz liczby podzielne przez 3 lub przez 5 z przedziału [A; B).

int main()
{
	int a;
	int b;

	cout << "Podaj liczbe a" << endl;
	cin >> a;
	cout << "Podaj liczbe b" << endl;
	cin >> b;
	
	for (int i = a; i < b; i++)
		if (i % 3 == 0 || i % 5 == 0)
			cout << "Liczby podzielne przez 3 lub 5 to: " << i << endl;
	
}