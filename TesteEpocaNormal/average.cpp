#include <iostream>
#include <sstream>
#include <fstream>
#include <ostream>

#include "show_file.h"

using namespace std;

bool average(const string& input_fname, const string& output_fname)
{

    ifstream in(input_fname);
    ofstream out(output_fname);
    string line;
    int nlinhas = 0; 
    if(in.fail()) return false;
    while(getline(in,line))
    {
        nlinhas ++;
        double number;
        istringstream iss(line);
        double sum = 0;
        double counter = 0;
        while(iss >> number)
        {
            counter ++;
            sum +=number;

        }
        out << fixed << setprecision(3) << sum/counter << endl;

    }
    out << "lines=" << nlinhas << endl;
    return true;

}


