#include <iostream>
#include <sstream>
#include <vector>
#include <list>
using namespace std;

template <typename Itr> 
string to_string(Itr start, Itr end)
{
    ostringstream out;
    out << "[ ";
    for( Itr pointer = start; pointer != end; pointer++ ) out << *pointer << " ";
    out <<']';
    return out.str();
}

template <typename Itr, typename T> 
int replace(Itr start, Itr end, const T& a, const T& b)
{
    int counter = 0;
    for( Itr pointer = start; pointer != end; pointer++ )
    {
        if(*pointer == a ) {*pointer = b; counter ++;}

    }
    return counter++;
}