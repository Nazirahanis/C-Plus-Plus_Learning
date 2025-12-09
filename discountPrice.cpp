//This code is to calculate total price before discount, total item and the total price after dicount
//using user-define method

#include <iostream>
using namespace std;

double disc10(double totalPrice){
    double afterDisc;
    afterDisc = totalPrice * 0.9;
    return afterDisc;
}

double disc15(double bfrDisc){
    double afterDisc;
    afterDisc = bfrDisc * 0.85;
    return afterDisc;
}

int main(){
    double price, discPrice, totalPrice = 0;
    int totalItem = 0;
    
    cout << "Enter item price: ";
    cin >> price;
    while (price != 0){
        totalItem++;
        totalPrice += price;
        cout << "Enter item price: ";
        cin >> price;
    }

    if (totalPrice > 100)
        discPrice = disc15(totalPrice);
    else if (totalPrice > 50)
        discPrice = disc10(totalPrice);
    else 
        discPrice = totalPrice;

    cout << "Total item: " << totalItem << endl;
    cout << "Price before discount: RM " << totalPrice << endl;
    cout << "Price after discount: RM " << discPrice;


}