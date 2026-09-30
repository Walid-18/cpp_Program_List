#include<iostream>
using namespace std;
int main(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    if(a<b && a<c && a<d){
        cout<<a<<" is the smallest number";
    }

    else if(b<a && b<c && b<d){
        cout<<b<<" is the smallest number";
    }

     else if(c<a && c<b && c<d){
        cout<<c<<" is the smallest number";
    }

    else{
        cout<<d<<" is the smallest number";
    }

    return 0;
}
