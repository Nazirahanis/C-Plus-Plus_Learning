/*Concepts: Variables, type casting, arithmetic expressions
Task: Ask user for a Celsius temperature and convert it to Fahrenheit using
F = (C * 9.0 / 5.0) + 32

Sample Input:
Enter temperature in Celsius: 25

Expected Output:
Temperature in Fahrenheit = 77.0*/

#include <iostream>
using namespace std;

int main(){
    double C, F;

    cout << "Enter temperature in Celcius: ";
    cin >> C;

    F = (C * 9.0 / 5.0) + 32;

    cout << "Temperature in Fahrenheit = " << F;

    return 0;
}
