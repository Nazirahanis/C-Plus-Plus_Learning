/*Q1. Student Information Summary
Concepts: Variables, Input/Output, String, int, double
Task: Ask the user to enter their name, age, and CGPA. Display all details neatly.

Sample Input:
Name: Ali
Age: 20
CGPA: 3.75

Expected Output:
Student Information
-------------------
Name: Ali
Age: 20
CGPA: 3.75*/

#include <iostream>
using namespace std;

int main(){

string name;
int age;
double cgpa;

cout << "Student Information\n------------------------------\n";
cout << "Name: ";
cin >> name;
cout << "Age: ";
cin >> age;
cout << "CGPA: ";
cin >> cgpa;

    return 0;
}