#include <iostream>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;


/* bool compare_pairs(const pair<string, size_t>& p1, const pair<string, size_t>& p2) {
    return p1.first < p2.first;
}
 */

void count_words(const string& str, map<string, size_t>& count)
{
    istringstream iss(str);
    string word;
    while(iss >> word)
    {
      for (char& letter: word) letter = tolower(letter);
        if(count.find(word) != count.end())
        {
            count[word]+=1;

        }
        else count[word] = 1;

    }
   // sort(count.begin(),count.end(),compare_pairs);

}

void show_map(const map<string, size_t>& count) {
  cout << "[ ";
  for (const auto& e : count) {
    cout << e.first << ":" << e.second << ' ';
  }
  cout << "]\n";
}
