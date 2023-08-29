#include <iostream>
#include "print_vector.h"

using namespace std;

template <typename T>
void normalise(vector<T>& v, const T& min, const T& max)
{
    for (T &var: v)
    {
        if (var < min) var = min;
        if (var > max) var = max;

    }

}

