#include <iostream>
#include "print.h"
#include <fstream>
#include <sstream>
#include <string>

using namespace std;



string trim(string input) {
    
    size_t start = input.find_first_not_of(" ");
    
    if (start == string::npos) {
        return "";
    }
    
    size_t end = input.find_last_not_of(" ");
    
    return input.substr(start, end - start + 1);
}

void normalise(const string& input_fname, const string& output_name){
    ifstream in(input_fname);
    ofstream out(output_name);
    string line;
    string end = "";
    while(getline(in,line)){
        istringstream iss(line);
        string wrd;
        for(char& c: line) c = toupper(c);
        line.erase(0,line.find_first_not_of(" "));
        line.erase(line.find_last_not_of(" ")+1);
        if(line.length() > 0) out << line + '\n';
    }
}
