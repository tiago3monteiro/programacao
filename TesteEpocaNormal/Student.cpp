#include "Student.h"

using namespace std;

Student::Student(const string& name, const string& id, short ac, short p1, short p2): name_(name), id_(id), ac_(ac),p1_(p1),p2_(p2){}

string Student::get_id() const {return id_;}
string Student::get_name() const {return name_;}
double Student::actual_grade() const {return ac_ *0.1 + p1_ * 0.45 + p2_ *0.45;}