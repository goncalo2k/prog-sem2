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
    int start_pos = 0, aux_pos;
    aux_pos = s.find(' ', start_pos);
    while (start_pos != npos) 
    {
        
    }
}
int main()
{
    return 0;
}