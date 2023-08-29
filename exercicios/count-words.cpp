#include <iostream>
#include <sstream>
#include <map>

using namespace std;

void count_words(const string& str, map<string, size_t>& count)
{
    istringstream iss(str);
    string word;
    while(iss >> word)
    {
        for(char &c: word) c = tolower(c);
        auto search = count.find(word);
        if( search != count.end()) search->second ++;
        
        else count.insert({word,1});
    }
}


void show_map(const map<string, size_t>& count) {
  cout << "[ ";
  for (const auto& e : count) {
    cout << e.first << ":" << e.second << ' ';
  }
  cout << "]\n";
}

