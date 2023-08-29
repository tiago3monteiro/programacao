#include "Date.h"

bool Date::is_before(const Date& date) const  // Testa se a data do objeto é menor que umaa certa data
{
    if (year_ < date.year_) return true;
    else if(year_ > date.year_) return false;
    else 
    {
        if (month_ < date.month_) return true;
        else if(year_ > date.year_) return false;
        else
        {
            if (day_ < date.day_) return true;
            else return false;
        }
    }
}

Date::Date()  //Default Constructor Class Date
{
    year_ = 1;
    month_ = 1;
    day_ = 1;
}

Date::Date(int year, int month, int day) // Constructor Class Date
{
    year_ = year;
    month_ = month;
    day_ = day;

}