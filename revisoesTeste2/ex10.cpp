#include <iostream>
#include <fstream>
#include <sstream>
#include <ostream>
#include "show_file.h"

using namespace std;

void calc_medians(const string& input_fname, const string& output_fname)
{
    ifstream in(input_fname);
    ofstream out(output_fname);
    string linha;
    while(getline(in,linha))
    {
    
        istringstream word(linha);
        string x;
        while(word >> x)
        {
            cout << x << " ";

        }




    }
        


}


int main()
{ 
    calc_medians("aa.txt", "aaout.txt"); 
    show_file("aaout.txt");

}

