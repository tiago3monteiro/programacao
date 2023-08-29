#include <iostream>
#include "Operation.h"

using namespace std;

class Sum: public Operation
{
    public:
    Sum(int op1, int op2): Operation(op1,op2){ }
    virtual int operation() const 
    {
        return this->get_op1()+ this->get_op2();
    }


};

class Power: public Operation
{
    public:
    Power(int op1, int op2): Operation(op1,op2){ }

    virtual int operation() const 
    {
    int i = 1;
    int counter = 0;
    if(!this->get_op2()) return i;
    while(counter < this->get_op2())
    {
        i *= this->get_op1();
        counter++;
    }
    return i;
    }
    

};

