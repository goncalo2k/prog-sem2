#include <iostream>

using namespace std;

bool is_prime(int n)
{
    if (n<2) return 0;
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n%i == 0) return 0;
        }
        return 1;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (is_prime(i) == 0) continue;
        else {cout << i << "\n";}
    }
    return 0;
}