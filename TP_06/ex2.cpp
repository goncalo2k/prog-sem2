#include <string>
#include <vector>
#include <iostream>
using namespace std;
 
//! Print vector of strings.
void print(const vector<string>& v) {
  cout << "[ ";
  for (size_t i = 0; i < v.size(); i++) {
    cout << '\"' << v[i] << "\" ";
  }
  cout << "]\n";
}

void split(const string& s, vector<string>& v)
{
    long unsigned int start_pos = 0, aux_pos;
    aux_pos = s.find(' ', start_pos);
    while (start_pos != string::npos) 
    {
     aux_pos = s.find(' ', start_pos);
     v.push_back(s.substr(aux_pos - start_pos));
     start_pos = aux_pos;
    }
}
int main()
{
    return 0;
}