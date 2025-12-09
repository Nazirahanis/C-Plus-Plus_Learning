#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main(){

    const int SIZE = 20;
    char city[SIZE];

    /*cin >> city;
    cout << "You entered: " << city << endl; //Can only enter one word*/

    // Use this if it is more than a word EX: Pasir Gudang
    cin.getline (city, SIZE); // city is the input, SIZE is the limit of how many characters are accepted
    cout << "You entered: " << city << endl;

    //strlen(str) : returns length of C-string str
    cout << "Length of city " << city << " is " << strlen(city) << endl;

    //strcat(str1, str2): appends str2 to the end of str1
    char taman[SIZE] = "Taman U";
    cout << "The combined string is " << strcat(taman, city) << endl; //Use variable, but for 2nd argument can use literal string 

    //strcpy(str1, str2): copies str2 to str1
    char copiedAddress[SIZE];
    strcpy(copiedAddress,"Taman U, Skudai"); // This can use literal string
    cout << "The copied string is " << copiedAddress << endl;

    //strstr(str1, str2): finds the first occurrence of str2 in str1.
    cout << strstr(copiedAddress, "U") << endl;

    //strcmp(atr1, str2) : to compare
    if (strcmp(copiedAddress, "Taman U, Skudai")){
        cout << "Different string" << endl;
        cout << strcmp(copiedAddress, "Taman U, Skudai") << endl;
    }
    else {
         cout << "Same string" << endl;
        cout << strcmp(copiedAddress, "Taman U, Skudai") << endl;
    }
    
    int num;
    num = atoi("84abc");
    cout << num << endl;


    return 0;
}
