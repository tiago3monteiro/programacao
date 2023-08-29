#include <iostream>
#include "Date1.h"

using namespace std;

Date::Date()
{
    year = 0001;
    month = 01;
    day = 01;
}

Date::Date(int year, int month, int day)
{
    this->year = year;
    this->month =  month;
    this->day = day;
}

int Date::get_year() const
{
    return year;
}

int Date::get_month() const
{
    return month;
}

int Date::get_day() const
{
    return day;
}

bool is_before(const Date& date1, const Date& date2)
{
    if (date1.get_year() > date2.get_year()) return false;

    else if (date1.get_year() < date2.get_year()) return true;

    else // ano igual
    {
        if (date1.get_month() > date2.get_month()) return false;

        else if (date1.get_month() < date2.get_month()) return true;

        else  //mes igual
        {
            if (date1.get_day() > date2.get_day()) return false;

            else return true;
        }
    }
}

