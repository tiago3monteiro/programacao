#include <iostream>
#include <fstream>
#include <sstream>
#include <ostream>
#include "show_file.h"
#include <iomanip>
using namespace std;

bool average(const string& input_fname, const string& output_fname)
{
    auto counterLine = 0;
    ifstream in(input_fname);
    ofstream out (output_fname);
    if(in.fail()) return false;

    string line;
    while(getline(in,line))
    {
        counterLine ++;
        istringstream iss(line);
        double number, sum = 0;
        int count = 0;
        while(iss >> number)
        {
            count++;
            sum+=number;

        }
        out << fixed << setprecision(3) <<(sum / count) << endl;

    }
    out << "lines="<<counterLine;
    return true;
}

