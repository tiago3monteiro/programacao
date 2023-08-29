#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int count(const string& fname, const string& word)
{
    
    ifstream in(fname);
    int counter = 0;
    string x, temp;
    temp = word;
    for(auto &c : temp) c = tolower(c); 
    while (in >> x)
    {
        for(auto &c : x) c = tolower(c); 
        if (x == temp) counter++;



    }
    return counter;


}

