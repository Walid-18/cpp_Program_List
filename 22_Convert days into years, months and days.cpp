#include<iostream>
using namespace std;
int main(){
    int totalDays, years, months, days;
    cout<<"Enter total days: ";
    cin>>totalDays;

    years = totalDays /365;

    int remDays;
    remDays = totalDays%365;

    months = remDays / 30;
    days = remDays % 30;

    cout<<totalDays<<"Day is equivalent to: "
        <<years<<" Years "
        <<months<<",Months "
        <<days<<",Days";
    return 0;
}
