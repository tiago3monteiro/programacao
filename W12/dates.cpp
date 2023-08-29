#include <iostream>
#include "Date.h"
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

ostream& operator<<(std::ostream& os, const Date& data)
{
    os <<  setfill('0') << setw(4) << data.getYear() << "/";
    os <<  setfill('0') << setw(2) << data.getMonth() << "/";
    os <<  setfill('0') << setw(2) << data.getDay();
    return os;
}
bool operator<(Date data1, Date data2)
{
    if(data1.getYear() < data2.getYear()) return true;
    else if (data1.getYear() > data2.getYear()) return false;
    else
    {
        if(data1.getMonth() < data2.getMonth()) return true;
        else if (data1.getMonth() > data2.getMonth()) return false;
        else
        {
            if(data1.getDay() < data2.getDay()) return true;
            return false;

        }  
    }
}

