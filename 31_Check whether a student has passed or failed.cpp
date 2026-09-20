#include<iostream>
using namespace std;
int main(){
    string subjects[5]={"Bangla", "English", "Math", "Physics", "Chemistry"};
    int marks[5];
    cout<<"Enter marks for 5 subjects:"<<endl;
    for(int i=0; i<5; i++){
        cout<<subjects[i]<<": ";
        cin>>marks[i];
    }
    cout<<endl<<"-----Results-----"<<endl;
    for(int i=0; i<5; i++){
        if(marks[i]<=40){
        cout<<subjects[i]<<": Failed"<<endl;
        }
        else{
        cout<<subjects[i]<<": Passed"<<endl;

        }
    }
}
