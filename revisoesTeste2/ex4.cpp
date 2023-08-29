#include <iostream>
#include <vector>

using namespace std;

int mySize(string word)
{
    int size = 0;
    for (int i = 0; word[i] != '\0'; i++) size++;
    
    return size;


}

string EmComum(string word1, string word2)
{
    string res = "";
    string menor;
    (mySize(word1)>= mySize(word2))? menor = word2 : menor = word1;
    
    for(int i = 0; i < mySize(menor); i++)
    {
        if (word1[i] == word2[i]) res+= word1[i]; 
    }
    return res;


}


string longest_prefix(const vector<string>& v)
{
    string atual = v[0];
    for(string word :v)  atual = EmComum(atual , word); 
    return atual;


}


int main()
{
    cout << "\"" << longest_prefix({ "apple", "apply", "ape", "april" }) << "\"\n";
    
    return 0;
    
}