/*Concepts: Constants, double data type, arithmetic, assignment
Task:Use const double PI = 3.14159; Ask user for radius → calculate and display area and circumference.

Formula:
Area = PI * r * r  
Circumference = 2 * PI * r

Sample Input:
Enter radius: 4

Expected Output:
Area = 50.2654
Circumference = 25.1327*/

#include <iostream>
using namespace std;

int main(){

    const double PI = 3.14159;
    int r;
    double area, circumference;

    cout << "Enter radius: ";
    cin >> r;
    
    area = PI * r * r;
    circumference = 2 * PI * r;

    cout << "Area = " << area << endl;
    cout << "Circumference = " << circumference;


    return 0;
}