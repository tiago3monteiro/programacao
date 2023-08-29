#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp( pair<string, size_t> element1, pair<string, size_t> element2)
{
    if (element1.first < element2.first) return true;
    return false;

}

void show_vector(const vector<pair<string, size_t>>& count) {
  cout << "[ ";
  for (const auto& e : count) {
    cout << e.first << ":" << e.second << ' ';
  }
  cout << "]\n";
}

void count_words(const string& str, vector<pair<string, size_t>>& count)
{
    bool novo;
    string word;
    istringstream iss(str);
    while (iss >> word)
    {
        for ( auto &c: word) c = tolower(c);
        novo = true;

        for (auto& pair: count)
        {
            if( pair.first == word)
            {
                pair.second += 1;
                novo = false;
            }
        }
        if (novo) count.push_back({word,1});
    }
    sort(count.begin(),count.end(), comp);

}


