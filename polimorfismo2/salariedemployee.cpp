#include<iostream>
#include<stdexcept>
#include "salariedemployee.h"
using namespace std;

SalariedEmployee::SalariedEmployee(const string& first, const string& last, const string& ssn, double salary)
:Employee(first, last, ssn){
    setWeeklySalary(salary);
}
void SalariedEmployee::setWeeklySalary(double salary){
    if(salary>=0.0){
        weeklySalary=salary;
    }
    else{
        throw invalid_argument("weekly salary must be >=0.0");
    }
}
double SalariedEmployee::getWeeklySalar()const{
    return weeklySalary;
}
double SalariedEmployee::earnings()const{
    return getWeeklySalar();
}
void SalariedEmployee::print()const{
    cout<<"salaried employee: ";
    Employee::print();
    cout<<"\nweekly salary: "<<getWeeklySalar();
}
