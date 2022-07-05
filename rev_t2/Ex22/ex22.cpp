#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <map>
 
using namespace std;

//! print map in one line
void show_map(const map<string, size_t>& count) {
  cout << "[ ";
  for (const auto& e : count)   {
    cout << e.first << ":" << e.second << ' ';
  }
  cout << "]\n";
}

string lowercase(string in) 
{
    for(char& c : in) 
    {
        c = tolower(c);
    }
    return in;
}

void count_words(const string& str, map<string, size_t>& count) 
{
    string fs = lowercase(str);
    string rs;
    istringstream iss(fs);
    while (iss >> rs)
    {
        count[rs]++;
    }
}