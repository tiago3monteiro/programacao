#include <iostream>
#include <sstream>
#include "print_string.h"
#include <vector>
#include <string>

using namespace std;



void split(const string& s, vector<string>& v)
{
    istringstream iss(s);
    string temp;
    while (getline(iss,temp,' '))
    {
        if (temp == "") continue;
        v.push_back(temp);

    }
}

