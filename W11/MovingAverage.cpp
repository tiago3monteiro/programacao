#include <iostream>
#include "MovingAverage.h"
#include <iomanip>

using namespace std;

MovingAverage::MovingAverage(size_t n)
{
    n_ = n;
}

void MovingAverage::update(double value)
{
    if (values_.size() < n_) values_.push_back(value);
    else
    {
        values_.pop_front();
        values_.push_back(value);
    }
    
}
double MovingAverage::get() const
{
    double sum = 0.0;
    size_t count = 0;
    for (double value : values_) {
        sum += value;
        count++;
    }
    return count > 0 ? sum / count : 0.0;

}
