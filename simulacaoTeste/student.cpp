#include <iostream>
#include "Student.h"
#include <iomanip>

using namespace std;

Student::Student(const std::string& name, const std::string& id, short ac, short p1, short p2)
{
    name_ = name;
    id_ = id;
    ac_ = ac;
    p1_ = p1;
    p2_ = p2;

}

string Student::get_id() const
{
    return this->id_;
}

string Student::get_name() const
{
    return this->name_;
}

double Student::actual_grade() const // [0..20]
{
    return (ac_ * 0.1 +  0.45*(p1_+p2_)); 

}

