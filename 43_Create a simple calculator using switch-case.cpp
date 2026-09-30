#include<iostream>
using namespace std;
int main(){
    char op;
    int n1, n2;

    cout<<"Enter an operator(+, -, *, /): ";
    cin>>op;

    cout<<"Enter two numbers: ";
    cin>>n1>>n2;

    switch(op){
        case'+':
            cout<<n1<<" + "<<n2<<" = "<<n1 + n2;
            break;

        case'-':
            cout<<n1<<" - "<<n2<<" = "<<n1 - n2;
            break;

        case'*':
            cout<<n1<<" * "<<n2<<" = "<<n1 * n2;
            break;

        case'/':
            cout<<n1<<" / "<<n2<<" = "<<n1 / n2;
            break;
    }
    return 0;
}
