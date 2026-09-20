#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double principal, rate, time, totalAmount, CI;
    cin>>principal>>rate>>time;

    totalAmount = principal*pow((1+rate/100), time);
    CI = totalAmount - principal;

    cout<<"Total Amount: "<<totalAmount<<endl;
    cout<<"Compound Interest: "<<CI;

    return 0;
}
