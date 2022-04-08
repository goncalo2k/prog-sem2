#include <iostream>

using namespace std;

int adigits(int a, int b, int c) 
{
    int res = 0;
    int fdig, sdig, tdig;
    if (a >= b && a >= c) 
    {
        fdig = a;
        if (b >= c) 
        {
            sdig = b;
            tdig = c;
        }
        else 
        {
            sdig = c;
            tdig = b;
        }
    }
    else if (b >= a && b >= c) 
    {
        fdig = b;
        if (a >= c) 
        {
            sdig = a;
            tdig = c;
        }
        else 
        {
            sdig = c;
            tdig = a;
        }
    }
    else if (c >= a && c >= b) 
    {
        fdig = c;
        if (a >= b) 
        {
            sdig = a;
            tdig = b;
        }
        else
        {
            sdig = b;
            tdig = a;
        }
    }
    res = fdig*100 + sdig*10 + tdig;
    return res;
}


int main()
{
    cout << adigits(6, 7, 2);
    return 0;
}