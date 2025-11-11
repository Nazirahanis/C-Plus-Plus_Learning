/*Name : NUR NAZIRAH HANIS BINTI NAZRI
Maric no : A25CS0319
Date : 11/11/2025
Set : 3*/

#include <iostream>
using namespace std;

int main(){
    int num, digit;
    int product = 1;
    cout << "Enter an integer number: ";
    cin >> num;
    if (num > 0){
        digit = num % 10;
        cout << digit;
        product = product * digit;
        num = num / 10;
        
    }
    while (num > 0){
        digit = num % 10;
        cout << " * " << digit;
        product = product * digit;
        num = num / 10;
    }

        cout << " = " << product << endl;

        if (product%7==0){
            cout << product << " is multiples of 7";
            if (product%5==0){
                cout << " and 5";
            }
            if (product%4==0){
                cout << " and 4";
            }
        }

        else if (product%5==0){
            cout << product << " is multiples of 5";
             if (product%7==0){
                cout << " and 7" ;
             }
             if (product%4==0){
                cout << " and 4" ;
             }
            }
        else if (product%4==0){
            cout << product << " is multiples of 4"; 
        }

        else        
            cout << " ";
        
        
    
        return 0;


}