#include<iostream>
using namespace std;

int main(){
    int a, b, temp;
    cout<<"Enter A: ";
    cin>>a;
    cout<<"Enter B: ";
    cin>>b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"After swapping:"<<endl<<"A= "<<a<<endl<<"B= "<<b;
}
