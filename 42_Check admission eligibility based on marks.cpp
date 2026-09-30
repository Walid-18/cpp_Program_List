#include<iostream>
using namespace std;
int main(){
    float SSC, HSC, totalGpa;
    cout<<"Enter gpa of SSC: ";
    cin>>SSC;
    cout<<"Enter gpa of HSC: ";
    cin>>HSC;

    totalGpa = SSC + HSC;

    if((totalGpa>=8.00) && (SSC>=3.50 && HSC>=3.50)){
        cout<<"Eligible for Science Unit";
    }

    else{
        cout<<"Not eligible for science unit";
    }
}
