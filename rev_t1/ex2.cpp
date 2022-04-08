#include <iostream>

using namespace std;

int main()
{
    int n, aux, res = 0;
    cin >> n;
    while (n != 0)
    {
        aux = n%10;
        res = res*10 + aux;
        n /= 10;
    }
    cout << res;
    return 0;
}