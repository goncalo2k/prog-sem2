#include <iostream>

using namespace std;

bool is_prime(int n) 
{
    if (n < 2) return 0;
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % 2 == 0) return 0;
        }
        return 1;        
    }
}

bool is_pern(int n) 
{
    int bin = 0, rem, prod = 1;
    while (n != 0)
    {
        rem = n % 2;
        bin = bin + (rem * prod);
        n = n / 2;
        prod *= 10;
        if (rem == 0)
        {
            return false;
        }
        else
        {
            continue;
        }
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a; cin >>b;
    int aux = a;
    while (aux <= b)
    {
     if(is_pern(a) ) && is_pern(b) && is_prime(a)) cout aux
    }
}