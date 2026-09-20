#include<iostream>
using namespace std;
int main(){
   double marks[5];
   double totalMarks = 0;
   double percentage = 0;

   cout<<"Enter marks of 5 subjects: "<<endl;

   for(int i=0; i<5; i++){
        cout<<"Subject "<<i+1<<": ";
        cin>>marks[i];
        totalMarks += marks[i];
   }
   percentage = totalMarks/5;

   cout<<"Total Marks: "<<totalMarks<<endl;
   cout<<"Percentage: "<<percentage<<"%";
    return 0;
}
