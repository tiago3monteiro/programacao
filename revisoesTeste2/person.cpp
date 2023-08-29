#include "Person.h"
#include <iostream>

using namespace std;

class Student: public Person
{
    public:
        Student(int id, const string& name, const string& course): Person(id,name) { course_ = course;}
        const string& course() const { return this->course_;}
        virtual string to_string() const 
        {
             ostringstream out;
             out << this->id()  << '/' << this->name() << '/' << course_;
             return out.str();
        }
    private:
        string course_;




};

class ErasmusStudent: public Student
{
    public:
        ErasmusStudent(int id, const string& name, const string& course, const string& country): Student(id,name, course) { country_ = country;}
        const string& country() const { return this->country_;}
        virtual string to_string() const 
        {
             ostringstream out;
             out << this->id()  << '/' << this->name() << '/' << this->course() << '/' << country_;
             return out.str();
        }
    private:
        string country_;




};

