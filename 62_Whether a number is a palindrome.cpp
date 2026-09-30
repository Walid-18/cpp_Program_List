#include<iostream>
using namespace std;
int main(){
    int n, rev, nReal, rem = 0;
    cin>>nReal;

    n = nReal;

    while(n > 0){
        rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    }
    cout <<"Reversed number = "<<rev<<endl;


    if(nReal == rev){
        cout<<nReal<<" is a palindrome number";
    }
    else{
        cout<<nReal<<" is not a palindrome number";
    }
}
