#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
 
using namespace std;

string uppercase(string in) {for (char& c : in) {c = toupper(c);}return in;}

int count(const string& fname, const string& word)
{
    int count = 0;
    ifstream in(fname);
    string inword, cword;
    cword = uppercase(word);
    while (in >> inword)
    {
        inword = uppercase(inword);
        if (cword == inword) {count++;}
    }
    return count;
}

int main() 
{
    cout << count("p1_test_a.txt", "THE") << '\n';
    return 0;
}