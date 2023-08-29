#include <iostream>
#include <fstream>
#include "print.h"


using namespace std;

void normalise(const string& input_fname, const string& output_fname)
{
    ofstream out (output_fname);
    ifstream in(input_fname);
    string line;
    while(getline(in,line))
    {
        if (line != "")
        {
            for(char& c: line) c = toupper(c);
            line.erase(0,line.find_first_not_of(" "));
            line.erase(line.find_last_not_of(" ")+1);
            if(line.length()) out << line << endl;
        }
        


    }


}

