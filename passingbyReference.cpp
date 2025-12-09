#include <iostream>
using namespace std;
void test(int , int&);
    
    int main(){
        int num;
        num = 5;
        test(24,num);
        cout << num << endl;
    
        test(num, num);
        cout << num << endl;

        test(num*num , num);
        cout << num << endl;

        test(num+num,num);
        cout << num << endl;

    system("pause");
    return 0;
}
    void test(int first, int& second){
        int third;
        third=first+second *second+2;
        first=second-first;
        second=2*second;

            cout <<first<<" "<<second<<" "<< third << endl;
}