#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;

    if(marks >= 80){
        cout << "Grade: A+" << endl;
    }
    else if(marks >= 75){
        cout << "Grade: A" << endl;
    }
    else if(marks >= 70){
        cout << "Grade: A-" << endl;
    }
    else if(marks >= 65){
        cout << "Grade: B+" << endl;
    }
    else if(marks >= 60){
        cout << "Grade: B" << endl;
    }
    else if(marks >= 55){
        cout << "Grade: B-" << endl;
    }
    else if(marks >= 50){
        cout << "Grade: C+" << endl;
    }
    else if(marks >= 45){
        cout << "Grade: C" << endl;
    }
    else if(marks >= 40){
        cout << "Grade: D" << endl;
    }
    else{
        cout << "Grade: Fail (F)" << endl;
    }


    return 0;
}
