#include <iostream>
#include <iomanip> 
#include <string>
#include <sstream>

#include "Date3.h"
using namespace std;

string direitinho(const int year, const int month, const int day) {
    string ano = to_string(year), mes = to_string(month), dia = to_string(day);

    if (mes.length() != 2) mes.insert(0, "0");
    if (dia.length() != 2) dia.insert(0, "0");

    while (ano.length() < 4) ano.insert(0, "0");

    return ano + mes + dia;
}



int days_in_m (int month, int year) {
  int n_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (month == 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) return 29;
  
  else return n_days[month-1];
}



bool Date::is_valid() const {
  if ((this->get_day() == 0) or (this->get_month() == 0) or (this->get_year() == 0))
    return false;

  else 
    return true;

  }


Date::Date() {
  yyyymmdd = "00010101";
}

Date::Date(int year, int month, int day) {
  if ((year >= 1 && year <= 9999) && (day <= days_in_m(month, year)) ) {
    yyyymmdd = direitinho(year, month, day);
  }
  else {
    yyyymmdd = direitinho(0, 0, 0);
  }
}

Date::Date(const std::string& year_month_day) {
  int year, month, day;
  char sep1, sep2;

  istringstream in(year_month_day);
  
  if ((in >> year >> sep1 >> month >> sep2 >> day) && (sep1 == '/' && sep2 == '/') && (year >= 1) && (year <= 9999) && (month < 13) && (day <= days_in_m(month, year))) {
    yyyymmdd = direitinho(year, month, day);
  }

  else {
    yyyymmdd = direitinho(0, 0, 0);
  }
}

int Date::get_year() const {
  return stoi(yyyymmdd.substr(0, 4));
}

int Date::get_month() const {
  return stoi(yyyymmdd.substr(4, 2));
}

int Date::get_day() const {
  return stoi(yyyymmdd.substr(6, 2));
}