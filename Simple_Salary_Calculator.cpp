/* Concepts: Variables, input/output, arithmetic operators, combined assignments
Task:Ask user for basic salary and allowance.Then calculate total salary and apply 11% EPF deduction.

Formula:
Total = basic + allowance  
Net Salary = Total - (Total * 0.11)

Sample Input:
Basic salary: 2500
Allowance: 500

Expected Output:
Total salary before EPF: 3000
EPF (11%): 330
Net salary: 2670
*/

#include <iostream>
using namespace std;

int main(){
    int salary, allowance, total, EPF, net;

    cout << "Basic salary: ";
    cin >> salary;
    cout << "Allowance: ";
    cin >> allowance;
    cout << endl;

    total = salary + allowance;
    EPF = 0.11 * total;
    net = total - EPF; //net = total - (total * 0.11)

    cout << "Total salary before EPF: " << total << endl;
    cout << "EPF (11%): " << EPF << endl;
    cout << "Net salary: " << net;


    return 0;
}