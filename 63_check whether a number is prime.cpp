#include<iostream>
using namespace std;
int main(){
    int n, isprime = 1;
    cin>>n;

    if(n<=1){
        isprime = 0;
    }
    else{
        for(int i = 2; i<= n / 2; i++){
            if(n % i == 0){
                isprime = 0; // Found a factor, so it's not prime
                break;
            }
        }
    }
    if(isprime == 1){
        cout<<n<<" is a prime number";
    }
    else{
        cout<<n<<" is not a prime number";
    }
    return 0;
}
