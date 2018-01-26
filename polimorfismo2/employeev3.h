#ifndef EMPLOYEE123_H_INCLUDED
#define EMPLOYEE123_H_INCLUDED
#include <string>
#include "employee.h"
using namespace std;
class ComissionEmployee:public Employee{
public:
    ComissionEmployee(const string&,const string&,const string&, double=0.0,double=0.0);
    virtual ~ComissionEmployee(){}
    void setGrossSales(double);
    double getGrossSales()const;
    void setComissionRate(double);
    double getComissionRate()const;
    virtual double earnings()const override;
    virtual void print()const override;
private:
    double grossSales;
    double comissionRate;
};


#endif // EMPLOYEE123_H_INCLUDED
