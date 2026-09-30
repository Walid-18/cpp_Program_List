#include <iostream>
using namespace std;

int main(){
    double tax, income;
    cout<<"Enter annual taxable income (BDT): ";
    cin>>income;

    if (income <= 400000) {
        tax = 0.0;
    }
    else if (income <= 700000) {
        tax = (income - 400000) * 0.10;
    }
    else if (income <= 1100000) {
        tax = (300000 * 0.10) + (income - 700000) * 0.15;
    }
    else if (income <= 1600000) {
        tax = (300000 * 0.10) + (400000 * 0.15) + (income - 1100000) * 0.20;
    }
    else if (income <= 3600000) {
        tax = (300000 * 0.10) + (400000 * 0.15) + (500000 * 0.20) + (income - 1600000) * 0.25;
    }
    else {
        tax = (300000 * 0.10) + (400000 * 0.15) + (500000 * 0.20) + (2000000 * 0.25) + (income - 3600000) * 0.30;
    }
    cout<<"Income Tax: "<<tax<<" BDT";

    return 0;
}
