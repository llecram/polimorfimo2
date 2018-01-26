#ifndef SALARIEDEMPLOYEE_CPP_INCLUDED
#define SALARIEDEMPLOYEE_CPP_INCLUDED
#include<string>
#include"employee.h"
using namespace std;

class SalariedEmployee : public Employee{
public:
    SalariedEmployee(const string&, const string&, const string&, double=0.0);
    virtual ~SalariedEmployee(){}
    void setWeeklySalary(double);
    double getWeeklySalar()const;
    virtual double earnings()const override;
    virtual void print()const override;
private:
    double weeklySalary;
};
#endif // SALARIEDEMPLOYEE_CPP_INCLUDED
