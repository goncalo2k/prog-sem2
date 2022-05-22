#include <iostream>

using namespace std;

bool pangram(const string& s, string& m)
{
    char aux[26];
    int i = 0;
    while (s[i] != '\0')
    {
        if ('a' <= s[i] && s[i] <= 'z') aux[s[i] - 'a']++;
        if ('A' <= s[i] && s[i] <= 'Z') aux[s[i] - 'A']++;        
        i++;
    }
    for (int j = 0; j < 26 ; j++)
    {
        switch (aux[j])
        {
            case 0: m.push_back('a') ;break;  
            case 1: m.push_back('b') ;break;
            case 2: m.push_back('c') ;break;
            case 3: m.push_back('d') ;break;
            case 4: m.push_back('e') ;break;
            case 5: m.push_back('f') ;break;
            case 6: m.push_back('g') ;break;
            case 7: m.push_back('h') ;break;
            case 8: m.push_back('i') ;break;
            case 9: m.push_back('j') ;break;
            case 10: m.push_back('k') ;break;
            case 11: m.push_back('l') ;break;
            case 12: m.push_back('m') ;break;
            case 13: m.push_back('n') ;break;
            case 14: m.push_back('o') ;break;
            case 15: m.push_back('p') ;break;
            case 16: m.push_back('q') ;break;
            case 17: m.push_back('r') ;break;
            case 18: m.push_back('s') ;break;
            case 19: m.push_back('t') ;break;
            case 20: m.push_back('u') ;break;
            case 21: m.push_back('v') ;break;
            case 22: m.push_back('w') ;break;
            case 23: m.push_back('x') ;break;
            case 24: m.push_back('y') ;break;
            case 25: m.push_back('z') ;break;
            default:        break;
        }
    }
    if (s[0] == '\0') return false;
    else if (m.empty()) {return true;}
    else return false;
}

int main() 
{

}