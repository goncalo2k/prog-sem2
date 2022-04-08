#include <iostream>

using namespace std;

bool is_mersenne_number(unsigned long n)
{
    if (n == 0) return 0;
    int rem;
    while (n!=0)
    {
        rem = n % 2;
        n /= 2;
        if (rem == 0)
        {
            return false;
        }  
    }
    return true;
}

int main() 
{
    cout << is_mersenne_number(18446744073709551614UL);
    return 0;
}