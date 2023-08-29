#include <iostream>
#include "Operation.h"
#include <cmath>

using namespace std;

class Sum : public Operation
{
public:
    Sum(int op1, int op2) : Operation(op1, op2) { }
    int operation() const override { return this->get_op1() + this->get_op2(); }
};

class Power : public Operation
{
public:
    Power(int op1, int op2) : Operation(op1, op2) { }
    int operation() const override { return pow(this->get_op1(), this->get_op2()); }
};
