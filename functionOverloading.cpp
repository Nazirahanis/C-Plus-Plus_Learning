#include <iostream>
using namespace std;

int sum(int, int);
int sum(int, int, int);
double sum(double, double);
double sum(double, double, double);

int main(){
    int a=4, b=5, c=6;
    double d=2.8, e=3.8, f=4.8;

    cout << sum(a,b) << endl;
    cout << sum(a,b,c) << endl;
    cout << sum(d,e) << endl;
    cout << sum(d,e,f) << endl;


    return 0;
}

int sum(int num1, int num2){
    return num1 + num2;}
int sum(int num1, int num2, int num3){
    return num1 + num2 + num3;}
double sum(double num1, double num2){ return num1 * num2;}
double sum(double num1, double num2, double num3){
    return num1 + num2 + num3;}

