#include<iostream>
using namespace std;
int main(){
    long long int basicSalary, otherAllowance;
    cin>>basicSalary>>otherAllowance;

    cout<<"Basic Salary: "<<basicSalary<<endl
        <<"Other Allowance: "<<otherAllowance<<endl
        <<"Gross Salary = "<<basicSalary + otherAllowance;

    return 0;
}
