#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() 
{
    int k, d, i = 0;
    double res = 0;
    cin >> k; cout << ' '; cin >> d;

    while (i <= k)
    {
        res = res + (pow(-1,i))/(2*k-1);
        i++;
    }
    res *= 4;
    cout << fixed << setprecision(d) << res;
    return 0;
}