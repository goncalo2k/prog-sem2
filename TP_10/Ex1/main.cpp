#include <iostream>
#include <map>
#include <string>
 
using namespace std;

unsigned roman_to_arab(const string& roman) {
    unsigned int res = 0;
    int size = roman.size();
    map<char, unsigned> map_roman = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
    };

    for (int i = 0; i < size; i++)
    {
        if (map_roman[roman[i]] >= map_roman[roman[i+1]]) 
        {
            res += map_roman[roman[i]];
        }
        else 
        {
            res += map_roman[roman[i+1]] - map_roman[roman[i]];
            i++;
        }
    }
    return res;
}

int main() {
    string r = "XV";
    cout << roman_to_arab(r) << '\n';
    return 0;
}