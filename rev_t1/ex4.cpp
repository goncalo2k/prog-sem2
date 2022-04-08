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
    int rem, count = 0;
    while (n > 0)
    {
        rem = n % 2;
        n = n / 2;
        if (rem == 1)
        {
            count++;
        }
        else
        {
            continue;
        }
    }
    return is_prime(count);
}

int main()
{
    int a = 10, b = 50;
    int aux = a;
    while (aux <= b)
    {
     if(is_pern(aux) && is_prime(aux)) 
     {
        cout << aux;
     }
    aux++;
    }
    return 0;
}