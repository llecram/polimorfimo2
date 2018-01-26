#include <iostream>
#include<iomanip>
#include<vector>
#include<string>
#include "employee.h"
#include "employeev3.h"
#include "baseplusscomission.h"
#include "salariedemployee.h"
using namespace std;
void virtualViapointer(const Employee* const);
void virtualViaReference(const Employee &);
int main(){
    cout<<fixed<<setprecision(2);
    SalariedEmployee salariedEmployee("jhon","smith","111-11-1111",800);
    ComissionEmployee comissionEmployee("Sue","Jones","222-22-2222",10000,.06);
    BasePlusComissionEmployee basePlusComissionEmployee("Bob","Lewis","444-44-4444",5000,.04,300);
    cout<<"Employees processed individually using static binding: \n\n";
    salariedEmployee.print();
    cout<<"\earned $"<<salariedEmployee.earnings()<<"\n\n";
    comissionEmployee.print();
    cout<<"\earned $"<<comissionEmployee.earnings()<<"\n\n";
    basePlusComissionEmployee.print();
    cout<<"\nearned $"<<basePlusComissionEmployee.earnings()<<"\n\n";
    vector<Employee*>employees(3);
    employees[0]=&salariedEmployee;
    employees[1]=&comissionEmployee;
    employees[2]=&basePlusComissionEmployee;
    cout<<"Employees processed polymorphically via dynamic binding:\n\n";
    for (const Employee*employeeptr:employees){
        virtualViapointer(employeeptr);
    }
    cout<<"Virtual function calls made off base-class references:\n\n";
    for(const Employee *employeeptr:employees){
        virtualViaReference(*employeeptr);
    }
}
void virtualViapointer(const Employee*const baseclassptr){
    baseclassptr->print();
    cout<<"\nearned $"<<baseclassptr->earnings()<<"\n\n";
}
void virtualViaReference(const Employee &baseclassref){
    baseclassref.print();
    cout<<"\nearned $"<<baseclassref.earnings()<<"\n\n";
}
