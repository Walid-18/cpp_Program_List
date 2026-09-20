#include<iostream>
using namespace std;
int main(){
    double C, F;
    cout<<"Enter Fahrenheit value: ";
    cin>>F;

    C = (F-32)*5/9;

    cout<<"celsius value: "<<C;
    return 0;
}
