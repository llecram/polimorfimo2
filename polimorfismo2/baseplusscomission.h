#ifndef BASEPLUSSCOMISSION_H_INCLUDED
#define BASEPLUSSCOMISSION_H_INCLUDED
#include<string>
#include "employeev3.h"
using namespace std;
class BasePlusComissionEmployee:public ComissionEmployee{
public:
    BasePlusComissionEmployee(const string&, const string&, const string&, double =0.0, double =0.0,double = 0.0);
    virtual ~ComissionEmployee(){}
    void setBaseSalary(double);
    double getBaseSalary()const;
    virtual double earnings()const override;
    virtual void print()const override;
private:
    double baseSalary;
};
#endif // BASEPLUSSCOMISSION_H_INCLUDED
