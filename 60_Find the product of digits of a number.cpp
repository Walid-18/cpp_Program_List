#include<iostream>
using namespace std;
int main(){
    int n, rem;
    long long product = 1;

    cin>>n;

    while(n > 0){
            rem  = n % 10;
            product *= rem;
            n = n / 10;
    }
    cout<< "The product of digits is: "<<product;

    return 0;
}
/*
###If the user enters the number 125

1. 125 % 10 extracts the last digit, 5. The product becomes 1 × 5 = 5
2. 125 / 10 removes the last digit, leaving 12
3. 12 % 10 extracts the next digit, 2. The product becomes 5 × 2 = 10
4. 12 / 10 leaves 1
5. 1 % 10 extracts the last digit, 1. The product becomes 10 × 1 = 10
6. 1 / 10 results in 0, which breaks the while loop
*/
