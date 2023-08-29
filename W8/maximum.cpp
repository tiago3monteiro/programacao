#include <iostream>
#include "show_file.h"
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

 void maximum(const string& input_fname, const string& output_fname)
{
    string line;
    double number,counter = 0, maximum;
    ifstream in (input_fname);
    ofstream out (output_fname);
    while(getline(in,line,'\n'))
    {
        istringstream iss(line);
        while(iss >> number)
        {
            if (counter == 0) maximum = number;
            counter ++;
            if (number > maximum ) maximum = number;

            out << fixed << setprecision(3)<< number << endl;
        }

    
    }
    out << "count=" <<  int(counter) << "/max=" << maximum;

}


