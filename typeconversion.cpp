#include <iostream>
using namespace std;

int main(){
    char c = 'A'; cout << 6 + c <<endl; //int

    int i = 25; cout << 6.1 + i <<endl; //double

    int x, y = 25; 
    float z = 2.5F;
    x = y + z; //int
    cout << x << endl;

    int y1 = 50, y2 = 63, x1 = 30, x2 = 40;
    cout <<  y2 - y1 /x2 - x1 << endl;
    cout <<  (y2 - y1) /(x2 - x1) << endl << endl;

    cout << "--Prefix and Postfix Expression---" << endl;
    int kira = 5;
    int nilai_pertama = 10, nilai_kedua;
    cout << kira << endl << endl;

    nilai_kedua= 5* kira-- + nilai_pertama; //Postfix expression
    cout << kira << endl;
    cout << nilai_kedua << endl;
    cout << kira << endl << endl;

    nilai_kedua = 5* --kira + nilai_pertama; //Prefix expression
    cout << kira << endl;
    cout << nilai_kedua << endl;
    cout << kira << endl << endl;

    cout << "-- Type Casting--" << endl;
    double m;
    m = static_cast <double>(y2-y1)/(x2-x1);
    cout << "Value of m is " << m << endl;
    cout << "Value is " << static_cast <double>(y2-y1)/(x2-x1) << endl;

    char ch = 'C';
    cout << ch << " is " << static_cast<int>(ch) << endl << endl;

    cout << "--Try in class--" << endl;
    int a = 1;
    double d = 1.0;
    //a = 46/9;
    //a = 46 % 9 + 4 * 4 - 2;
    //a = 45 + 43 % 5 * (23 * 3 % 2);
    //a %=3 / a + 3;
    //d += 1.5 * 3 + (++a);
    d -= 1.5 * 3 + a++;
    cout << "The value is " << d << endl;



    return 0;
}