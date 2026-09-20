#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double units;
    double totalBill = 0.0;

    cout<< "Electricity units consumed: ";
    cin>> units;

    if(units <= 50){
        totalBill = units * 5.32;
    }
    else if(units <= 75){
        totalBill = (50 * 5.32) + ((units - 50) * 6.18);
    }
    else if(units <= 200){
        totalBill = (50 * 5.32) + (25 * 6.18) + ((units - 75) * 8.5);
    }
    else{
        totalBill = (50 * 5.32) + (75 * 6.18) + (200 * 8.5) + ((units - 200) * 9.1);
    }
    cout << "Total Electricity Bill: "<< totalBill<<" TK";

    return 0;
}
