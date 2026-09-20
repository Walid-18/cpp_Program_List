#include<iostream>
using namespace std;
int main(){
    double pricipal, rate, time, SI;
    cin>>pricipal>>rate>>time;

    SI=(pricipal*rate*time)/100;

    cout<<SI;

    return 0;
}
