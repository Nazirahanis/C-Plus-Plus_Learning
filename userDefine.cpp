#include <iostream>
using namespace std;

int calculateSum(int, int);
int calculateDiff(int, int);

int main(){

    int num1, num2;
    cout << "Enter two integer: ";
    cin >> num1 >> num2;

    calculateSum(num1, num2);
    calculateDiff(num1, num2);

    cout << "Sum: " << sum << endl;
    cout << "Different: " << diff << endl;
    return 0;
}