#include<iostream>
using namespace std;

int main(){
    int a, b, temp;
    cout<<"Enter A: ";
    cin>>a;
    cout<<"Enter B: ";
    cin>>b;

    temp = a;
    a = b;
    b = temp;

    cout<<"After swapping:"<<endl<<"A= "<<a<<endl<<"B= "<<b;
}
