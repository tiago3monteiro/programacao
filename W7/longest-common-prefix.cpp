#include <iostream>
#include <string>
#include <vector>
using namespace std;

string longest_prefix(const vector<string> &v)
{
    string longest = "";
    for (size_t i = 0; true; i++)
    {
        
        char current = v[0][i];
        for (size_t j = 1; j < v.size();j++)
        {
            if (i > v[j].size() - 1)
                return longest;
            if (v[j][i] != current) return longest;
        }
        longest += current;
    }
}

