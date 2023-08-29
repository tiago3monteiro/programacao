#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;




double average(const string& fname) 
{
    double number, sum, counter;
    string line;
    ifstream in(fname);
    while(true)
    {
        if(in.eof()) break;
        if (in >> number)
        {
            sum+=number;
            counter++;


        }
        else
        {
            in.clear();
            in.ignore(1);

        }
    }
    return sum/counter;

}



