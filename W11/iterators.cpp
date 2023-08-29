#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <list>

using namespace std;

template <typename Itr> 
string to_string(Itr start, Itr end)
{
    ostringstream oss;
    oss << "[ ";
    for(Itr element = start; element != end; element++)
    {
        oss << *element << " ";
    }
    oss << "]";   
    return oss.str();

}

template <typename Itr, typename T> 
int replace(Itr start, Itr end, const T& a, const T& b)
{
    int counter = 0;

    for(Itr element = start; element != end; element++)
    {
        
        if (*element == a) {*element = b; counter ++;}
    }   
    return counter;

}



