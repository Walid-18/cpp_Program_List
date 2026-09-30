#include <iostream>
using namespace std;

int main(){
    int n, count = 0;

    cin>>n;

    cout<<"Prime numbers from 1 to "<<n<<" are: \n";

    for(int i = 2; i < n; i++){
            int isprime = 0;
            for(int j=1; j<=i; j++){
                if(i % j == 0){
                    isprime++;
                }
            }
            if(isprime == 2){
                cout<<i<<" ";
                count++;
            }
        }

    cout<<"\nTotal number of primes: "<<count<< endl;

    return 0;
}
