#include <iostream>
using namespace std;

// #include <iostream>
// using namespace std;

// int main() {
//     int num1, num2;
//     cout << "Enter two integers: ";
//     cin >> num1 >> num2;

//     int sum = num1 + num2;
//     int diff = num1 - num2;

//     cout << "Sum: " << sum << endl;
//     cout << "Difference: " << diff << endl;

//     return 0;
// }


int calSum(int num1, int num2){
    int sum;
    sum = num1 + num2;
    return sum;

}

int calDiff(int num1, int num2){
    int diff;
    diff = num1 - num2;
    return diff;
}

int main(){
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int sum = calSum(num1, num2);
    cout << "The sum of the two integers is " << sum << endl;
    int diff = calDiff(num1, num2);
    cout << "The different of the two integers is " << diff << endl;

    return 0;
}