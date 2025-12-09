#include <iostream>
#include <cmath>
using namespace std;

void f( int n ){ //doesnt return anything since it is void // function call
    cout << "Inside f( int ), the value of the parameter is " << n << endl; //initial value that pass from main
    n += 37; // function modify the value
    cout << "Inside f( int ), the modified parameter is now " << n << endl ; //new value
    //only in this function, then it doesnt work for the main method anymore, the value in main wont be affected
}

int main() { //main
    int m = 612; 
    cout << "The integer m = " << m << endl;
    cout << "Calling f( m )..." << endl;
    f( m ); //inside the function
    cout << "The integer m = " << m << endl; //value m unchanged 

return 0;
}