#include <iostream>
#include "Date.h"
#include "Person.h"
#include <vector>
using namespace std;




void born_before(const vector<Person>& persons, const Date& date)  // Ver que pessoas nasceram antes de uma certa data
{
    date.show();
    cout << ": ";
    for (size_t i = 0; i < persons.size() ; i++)
    {
        if (persons[i].get_birth_date().is_before(date)) {persons[i].show();cout << " ";}
        
    }


}


