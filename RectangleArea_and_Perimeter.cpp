/*Concepts: Numeric data types, constants, arithmetic expressions, input/output
Task: Input the rectangle’s length and width. Use a constant for unit label “cm”.
Display area and perimeter.

Sample Input:
Length: 5
Width: 3

Expected Output:
Area = 15 cm²
Perimeter = 16 cm*/

#include <iostream>
using namespace std;

int main(){

int length, width, area, peri;

cout << "Length: ";
cin >> length;
cout << "Width: ";
cin >> width;

area = length * width;
peri = (2*length) + (2*width);

cout << "Area = " << area << " cm²" << endl;
cout << "Perimeter = " << peri << " cm" << endl;

return 0;

}