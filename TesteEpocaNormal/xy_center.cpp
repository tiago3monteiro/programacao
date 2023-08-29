#include <iostream> 
#include <iostream>
#include <fstream>
#include <sstream>
#include <ostream>
#include "show_file.h"
#include <vector>
using namespace std;


void xy_center(const string& input_fname, const string& output_fname)
{
    double averageX = 0;
    double averageY = 0;
    double numberOfPoints = 0;
    ifstream in(input_fname);
    ofstream out(output_fname);
    string line;
    while(getline(in,line))
    {
        numberOfPoints += 1;
        double number;
        istringstream iss(line);
        vector<double> linhas;
        while(iss >> number)
        {
            linhas.push_back(number);
            

        }
    out << '(';
    bool first = true;
    for(double element: linhas)
    
    {
        if(first) 
        {
            out << fixed << setprecision(1) << element << ','; 
            averageX += element;
            first = false;
        }
        else 
        {
            out << fixed << setprecision(1) << element;
            averageY += element;
        }

    }
     out << ')' << endl;
    }
    cout << averageX << endl;
    out << '(' << fixed << setprecision(1) << averageX/numberOfPoints << ',' << averageY/numberOfPoints << ')';




}

int main()
{ xy_center("xy-1.txt", "xy-1_out.txt");
  show_file("xy-1.txt"); show_file("xy-1_out.txt"); }