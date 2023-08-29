#include <iostream>
#include "Operation.h"

using namespace std;

class Sum: public Operation
{
public:
    Sum(int op1, int op2): Operation(op1,op2) {}
    virtual int operation() const
    {
        return this->get_op1() + this->get_op2();


    }
    

};


class Power: public Operation
{
public:
    Power(int op1, int op2): Operation(op1,op2) {}
    virtual int operation() const
    {
        int valor = this->get_op1();
        if (!this->get_op2()) return 1;
        for(int i = 0; i < this->get_op2()-1 ; i++)  valor *= this->get_op1();
        return valor;
    }
    

};


