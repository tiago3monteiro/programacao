#include "Person.h"

Person::Person(const std::string& name, const Date& birth_date)  // Constructor Class Person  ----> Nome + Data de Nascimento
{
    name_ = name;
    birth_date_ = birth_date;
    
}
std::string Person::get_name() const   //Acess Nome
{
    return name_;
}

Date Person::get_birth_date() const  //Acess Data de Nascimento
{
    return birth_date_;
}