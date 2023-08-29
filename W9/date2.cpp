#include <iostream>
#include "Date2.h"
#include <sstream>
#include <string>

using namespace std;

Date::Date()
{
    year = 1;
    month = 1;
    day = 1;
}

bool valid(int year, int month, int day) {
  if (year < 0 || month < 1 || month > 12 || day < 1 || day > 31) {
    return false;
  }

  // Check if the day is valid for the given month and year
  bool leap = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
  int daysInMonth[] = {31, 28 + leap, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (day > daysInMonth[month - 1]) {
    return false;
  }

  return true;
}

Date::Date(int year, int month, int day)
{
    if(year >= 1 && year <=9999 && valid(year,month,day))
    {
    this->year = year;
    this->month =  month;
    this->day = day;
    }
    else
    {
        this->year = 0;
        this->month =  0;
        this->day = 0;
    }   
}

Date:: Date(const string& year_month_day)
{
    month = 0,day = 0, year = 0;
    
    string r;
    bool NaN = false;
    istringstream iss(year_month_day);
    
    for (int i = 0; i<3; i++)
    {
        getline(iss, r, '/');
        
        
        for(char letter : r) 
        {

            if (letter > '9' || letter < '0') 
            {
                NaN = true;
            
            }
        }
        if (NaN == false)
        {
            switch (i)
            {
                case 0:
                    year = stoi(r);
                    break;
                case 1:
                    month = stoi(r);
                    break;
                case 2:
                    day = stoi(r);
                    break;
                
                default:
                    break;
            }
        }
    }
    if (!valid(year,month, day))
    {
        year = 0;
        month = 0;
        day = 0;
    }

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

bool Date::is_valid()const
{
    if(!year) return false;
    if(!month) return false;
    if(!day) return false;
    return true;
}

