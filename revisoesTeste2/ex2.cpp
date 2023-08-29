#include <iostream>
#include <sstream>
#include <vector>
#include "print_string.h"

using namespace std;

void split(const string& s, vector<string>& v)
{
    string word;
    istringstream words(s);
    while (words >> word)
    {
        v.push_back(word);

    }



}
