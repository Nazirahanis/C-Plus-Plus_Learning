//This program demostrate C++ input and output.
//It uses variables, identifiers, cin and cout.

#include <iostream> //We need this preprocessor directive to use cin and cout
using namespace std; //This namespace tells that we are using the standard namespace

int main(){
    //We must difine variable before using it
    string firstName;
    int userAge;
    double favouriteNum;
    char lastNameInitial;

    //Always display a prompt before using cin
    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your age: ";
    cin >> userAge;

    cout << "Enter your favorite number(can be in decimal): ";
    cin >> favouriteNum;

    cout << "Enter the first initial of your name : ";
    cin >> lastNameInitial;

    //Display a nlank line for spacing
    cout << "\n --- Your Profile Summary --- \n";

    //Display the stored value from the variables
    cout << "Name: \t\t" << firstName << endl;
    cout << "Age: \t\t" << userAge << endl;
    cout << "Favourite #: \t" << favouriteNum << endl;
    cout << "Inital: \t" << lastNameInitial << endl;



    return 0;
}