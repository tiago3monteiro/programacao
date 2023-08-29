#include "show_file.h"
#include <iostream>
#include <climits>

#include <string>
using namespace std;

void maximum(const string& input_fname, const string& output_fname)
{
    ifstream in(input_fname);
    ofstream out(output_fname);
    string line;
    double max = INT_MIN ;
    int count = 0;
    while(getline(in,line))
    {

        if(line.find_first_not_of(' ')== string::npos) continue;
        count ++;
        double number;
        istringstream iss(line);
        while(iss >> number)
        {

            if(number > max)
            {
                max = number;

            }
            out << fixed << setprecision(3)<< number << endl;


        }



    }
    out << "count="<< count << "/max=";
    out <<  fixed << setprecision(3) << max<<endl;
}
