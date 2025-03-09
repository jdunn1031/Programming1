#include <iostream>
using namespace std;

int main() 
{
// Promtp user to enter temp in celuis

int celsius;
cout << "Enter the temperature in Celsius: ";
cin >> celsius;


// Formula to convert Celsius to Fahrenheit
double fahrenheit = (celsius * 9.0 / 5) + 32;

cout << "The temperature in Fahrenheit is: ";
cout << fahrenheit << endl;
return 0;
}
