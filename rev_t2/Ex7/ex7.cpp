#include <iostream>
#include <fstream>
#include <sstream>
 
using namespace std;
 
struct wcresult {
  unsigned int lines;
  unsigned int words; 
  unsigned int bytes; 
};

 unsigned int bytecount(string in)
{
    unsigned int b = 0;
    for (char& c : in)
    {
       c = c;
       b++;
    }
    return b;
}


wcresult wc(const string& filename) 
{
    ifstream in(filename);
    unsigned int l = 0, w = 0, b = 0;
    string line, word;
    while (getline(in,line))
    {
        l++;
        b++;
        b += bytecount(line); 
        istringstream iss(line);
        while (iss >> word)
        {
            w++;
        }

    }
    return {l,w,b};
}
