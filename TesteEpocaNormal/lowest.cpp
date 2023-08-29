#include <iostream>
#include <map>
#include <list>
// #include <string>

using namespace std;

double media(list<int> lista)
{
    double sum = 0;
    for(auto element: lista)
    {
        sum += element;

    }
    return sum/ lista.size();

}

string student_lowest_avg(map<string, list<int>> m)
{
    bool first = true;
    pair<string, double> loser;
    for(auto par: m)
    {
        if(first)
        {
            loser.first = par.first;
            auto sum = 0;
            loser.second = media(par.second);
            first = false;

        }
        else
        {
            if(loser.second > media(par.second))
            {
                loser.first = par.first;
                loser.second = media(par.second);
            }

        }

    }
    return loser.first;

}
int main()
{ map<string, list<int>> m5 = {
      {"Costanza", {10, 15}}, {"Frank", {10, 14}}};
  cout << student_lowest_avg(m5) << endl; }