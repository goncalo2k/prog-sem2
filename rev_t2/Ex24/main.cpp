#include <vector>
#include <list>
#include <iostream>
#include <sstream>
 
using namespace std;

template <typename Itr> 
string to_string(Itr start, Itr end)
{
    ostringstream out;
    out << "[ ";
    while (start != end)
    {
        out << *start << " ";
        start++;
    }
    out << "]";
    return out.str();
}

template <typename Itr, typename T> 
int replace(Itr start, Itr end, const T& a, const T& b)
{
    int counter = 0;
    while (start != end)
    {
        if (*start == a)
        {
            counter ++; *start = b;
        }
        start++;
    }
    return counter;
}