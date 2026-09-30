#include<iostream>
using namespace std;

int main(){
    int month, year;

    cout<<"Enter any month number(1 to 12): ";
    cin>>month;

    cout<<"Enter Year: ";
    cin>>year;

    switch(month){
        case 1:
            cout<<"31 days in January ";
            break;

        case 3:
            cout<<"31 days in March";
            break;

        case 2:
            if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
                cout<<"29 days in February (Leap Year)";
            }
            else{
                cout<<"28 days in February";
            }
            break;

        case 4:
            cout<<"30 days in April";
            break;

        case 5:
            cout<<"31 days in May";
            break;

        case 6:
            cout<<"30 days in June";
            break;

        case 7:
            cout<<"31 days in July";
            break;

        case 8:
            cout<<"31 days in August";
            break;

        case 9:
            cout<<"30 days in September";
            break;

        case 10:
            cout<<"31 days in October";
            break;

        case 11:
            cout<<"30 days in November";
            break;

        case 12:
            cout<<"31 days in December";
            break;

    }
    return 0;
}
