/*Wypisz liczby całkowite od 1 do 100, ale:
-Zamiast podzielnych przez 3 wypisz "Hopsasa"
- Zamiast podzielnych przez 5 wypisz "Tralala"
- Zamiast podzielnych przez 3 i przez 5 wypisz "HopsasaTralala" (to również wynika z powyższych zasad).*/

#include <iostream>
using namespace std;

int main()
{
	
	for (int i = 1; i < 100; i++)
		if (i % 3 == 0 && i % 5 == 0)
			cout << "HopsasaTralala" << endl; 
		else if (i % 5 == 0)
			cout << "Tralala" << endl;
		else if (i % 3 == 0)
			cout << "Hopsasa" << endl;
		else
			cout << i << endl;
}