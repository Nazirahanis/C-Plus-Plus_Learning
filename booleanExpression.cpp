#include <iostream>
using namespace std;

int main(){
    bool b = false; //b initialy is false
    cout << boolalpha;
    cout << b << endl;
    int number = 0;
    b = -10; //Now b is true
    cout << b << endl;
    b = number;
    cout << b << endl;
    
    cout << "----------------" << endl;

    //bool b;
    int p;
    int q = 5;

    b = q; //5 becomes true
    p = b; //true become 1
    cout << "The value of p is " << p << endl;

    cout << "-----Logical Expression-----" << endl;

    int a = 10;

    cout << a << endl;
    cout << (a == 1) << endl;
    cout << (a > 1) << endl;
    cout << (a = 5) << endl;

    a = (a != 5);
    cout << a << endl;

    cout << "------IF statement-----" << endl;

    int x = 0;
    if ( (0<x) && (x<10)) //syntax error
    cout << x;

    cout << "----------------" << endl;

    x = 1;
    if (2 < x < 9)
        cout << "First: " << x << endl;

    if ((2 < x) && (x < 9))
        cout << "Second: " << x << endl;

    cout << "----------------" << endl;

    int n = -5;
    if (n)
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;

    cout << "----------------" << endl;

    int z = 1;
        if (z = -11)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

    cout << "----------------" << endl;

    x = 1;
    if (x < 3)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

     cout << (x < 3 ? "Yes" : "No") << endl;    

    cout << "---SWITCH statement-----" << endl;

    bool h = true;
    switch (h)
    {
    case true:
        cout << "Yes" << endl;
        break;
    
    case false:
        cout << "No" << endl;
        break;
    
    default :
        cout << "Other" << endl;
        break;
    }

    cout << "---FOR Statement---" << endl;

    for ( n = 10; n > 0; n = n - 1 ) //pretest
    {
        cout << n <<" ";
    }
    cout << endl;

    n=10;
    do
    {
        cout << n << " ";
        n=n-1;
    } while (n>0); //need to put semicolon for post test
    cout << endl;
    
    cout << "---BREAK Statement---" << endl;
    /*for (n=10; n>0; n=n-1)
    {
        if (n<8) break;
        cout << n << " ";
    }*/
    int i;
    for (i = 10; i>0; i = i - 1)
     {
         if ( i < 8) break;
        cout << i << " ";
    }

    return 0;
}
  
