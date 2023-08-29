#include <iostream>
#include "show_file.h"
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;


double median(vector <double> v)
{

   sort(v.begin(),v.end());
   size_t n = v.size();
   if ( n % 2 == 1) return v[n/2];
   return ( v[n/2] + v[(n/2)-1] ) / 2;
}

void calc_medians(const string& input_fname, const string& output_fname) 
{
    string line, number;
    ifstream in(input_fname);
    ofstream out(output_fname);
    
    while (getline(in, line)) {
        line.erase(0, line.find_first_not_of(" \t")); 
        if (line.empty() || line[0] == '#') continue; 
        int counter = 0;
        vector<double> v; 
        istringstream iss(line);
        while (iss >> number) {
            if (number == "#") break;
            if (counter == 0) { 
                out << number << " ";
                ++counter;
                continue;
            }
            v.push_back(stod(number)); 
        }
        if (!v.empty()) {
            sort(v.begin(), v.end());
            out << fixed << setprecision(1) << median(v) << endl; 
        }
    } 
}

