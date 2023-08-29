#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
#include <iostream>
#include <vector>

using namespace std;

void SalariedEmployee::calculate_net_pay(){
    set_net_pay(salary_);
}

void HourlyEmployee::calculate_net_pay(){
    set_net_pay(wage_rate_*hours_);
}

void read_hours_worked(vector<Employee*>& employees) {
    for (Employee* employee : employees) {
        if (HourlyEmployee* hourlyEmployee = dynamic_cast<HourlyEmployee*>(employee)) {
            double hours;
            cin >> hours;
            hourlyEmployee->set_hours(hours);
        }
    }
}

void calculate_pay(vector<Employee*>& employees){
    for (Employee* employee : employees){
        employee->calculate_net_pay();
    }
}

void print_checks(const vector<Employee*>& employees){
    cout << "|";
    for (Employee* employee : employees){
        cout << " ";
        employee->print_check();
        cout << " |";
    }
}