#include <iostream>
#include <vector>
#include "Date.h"
#include "Person.h"

using namespace std;

// persons born before date
void born_before(const vector<Person>& persons, const Date& date) 
{
    int size = persons.size();
    date.show();
    cout << ": ";
    for (int i = 0; i != size ; i++)
    {
        if ((persons[i].get_birth_date()).is_before(date)) {
        cout << persons[i].get_name() << "-";
        persons[i].get_birth_date().show();
        cout << " ";
        }
    }
    
}

int main() {
    born_before({ {"Ana",{2000,4,5}}, {"Rui",{1999,5,11}}, {"Susana",{1999,5,13}}, {"Pedro",{2010,2,10}} }, {2000,1,1});
    born_before({ {"Rui",{2009,4,9}}, {"Susana",{1997,6,19}}, {"Pedro",{2018,3,10}} }, {2019,12,31});
    born_before({ {"Ana",{1999,5,12}}, {"Rui",{1960,3,21}}, {"Susana",{1999,7,25}}, {"Pedro",{1999,7,31}} }, {1970,1,1});
    born_before({ {"Ana",{2001,7,15}}, {"Susana",{2019,8,12}}, {"Pedro",{2000,5,8}} }, {2001,1,1});
    born_before({ {"Pedro",{2000,11,7}} }, {2001,1,1});
    return 0;
}
