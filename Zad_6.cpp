#include<iostream>
using namespace std;

int count_digit(int n) {
    int count = n;

    while (n != 0) {
        n = n / 10;
        count++;
    }
    return count;
	}
	
int main() {


    int n = 12451234;
    cout << "Number of digits in: " << n << " is: " << count_digit(n) << endl;


    int digit[8];

    //petla - rozbicie liczby na cyfry
    for (int i = 0; i <= 7; i++)
    {
        digit[i] = n % 10;
        n = n / 10;
    }
    //odczytanie cyfr z tablicy
    cout << "digits are: " << endl;
    for (int j = 7; j >= 0; j--)
    {

        if (j > 0)
        {
            cout << digit[j] << ", ";
        }
        else
            cout << digit[j] << endl;
    }
}
