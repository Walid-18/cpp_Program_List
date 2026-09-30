#include<iostream>
using namespace std;
int main(){
    int n , rem, rev;
    cin>>n;

    while(n > 0){
        rem = n % 10;
        rev = rem;
        n = n / 10;
        cout<<rev;
    }
}
