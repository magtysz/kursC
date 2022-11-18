/*Przyjmij liczbę N, a następnie wypisz na ekran kwadrat złożony z zer i jedynek ułożonych tak, jak czarne i białe pola na szachownicy.
 */

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Podaj liczbe" << endl;
	cin >> n;
	for (int i = 0; i < n; i++)
		if (i % 2 == 0)
			cout << "0101" << endl;
		else
			cout << "1010" << endl;
}