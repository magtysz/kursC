#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int pole;
	int s;
	cout << "Podaj przyprostokatna a" << endl;
	cin >> a;
	cout << "Podaj przyprostokatna b" << endl;
	cin >> b;
	cout << "Podaj przeciprostokatna c" << endl;
	cin >> c;
	if (a > 0 && b > 0) {
		//pole = (a * b) / 2;
		if ((a*a) + (b*b) == (c*c))
		s = (a + b + c) / 2;
		pole = sqrt(s * (s - a) * (s - b) * (s - c));
		cout << "Pole trojkata o boku " << a << " i wysokosci h " << b << " wynosi " << pole << endl;
	} 
	else
		cout << "Podaj liczbe calkowita od 1";
	
}