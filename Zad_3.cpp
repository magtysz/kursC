#include <iostream>
using namespace std;

//Przyjmij 3 liczby A, B i C, a następnie wypisz, czy da się z odcinków o takich długościach zbudować trójkąt.

int main()
{


	int a;
	int b;
	int c;
	cout << "Podaj liczbe a" << endl;
	cin >> a;
	cout << "Podaj liczbe b" << endl;
	cin >> b;
	cout << "Podaj liczbe c" << endl;
	cin >> c;

	if (a != 0 && b != 0 && c != 0) {
		if (a + b > c && a + c > b && b + c > a)
			cout << "Mozna utworzyc trojkat z odcinkow o dlugosci a, b, c" << endl;
		else

			cout << "Nie mozna utworzyc trojkata z odcinkow o dlugosci a, b, c" << endl;
	}

}