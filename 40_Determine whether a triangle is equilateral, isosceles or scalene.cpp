#include<iostream>
using namespace std;
int main(){
    double a, b, c;
    cin>>a>>b>>c;

    //All three sides are equal (\(a = b = c\))
    if(a==b==c){
        cout<<"The triangle is equilateral";
    }
    //Exactly two sides are equal (\(a = b\) or \(b = c\) or \(a = c\))
    else if(a==b || b==c || a==c){
        cout<<"The triangle is isosceles";
    }
    //\(a \neq b\) and \(b \neq c\) and \(a \neq c\))
    else{
        cout<<"The triangle is scalene";
    }
}
