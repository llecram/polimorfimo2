#include<iostream>
#include<stdexcept>
#include "employeev3.h"
using namespace std;
ComissionEmployee::ComissionEmployee(const string& first, const string& last, const string& ssn, double sales, double rate)
:Employee(first,last,ssn)
{
    setGrossSales(sales);
    setComissionRate(rate);
}
void ComissionEmployee::setGrossSales(double sales){
    if(sales>=0.0){
        grossSales=sales;
    }
    else{
        throw invalid_argument("Gross sales must be >= 0.0")
    }
}
double ComissionEmployee::getGrossSales()const{
    return grossSales;
}
void ComissionEmployee::setComissionRate(double rate){
    if(rate>=0.0){
        comissionRate=rate;
    }
    else{
        throw invalid_argument("Comission rate must be >= 0.0")
    }
}
double ComissionEmployee::getComissionRate()const{
    return comissionRate;
}
double ComissionEmployee::earnings()const{
    return getComissionRate() * getGrossSales();
}
void ComissionEmployee::print()const{
    cout<<"comission employee: ";
    Employee::print();
    cout<<"\ngross sales: "<<getGrossSales()<<"; comission rate: "<<getComissionRate();
}
