#include <iostream>
#include <cmath>

using namespace std;

int solve_eq(int a, int b, int c, double& x1, double& x2) 
{
    int sols;
    double delta;
    delta = pow(b,2) - 4 * a * c;
    if (delta == 0) 
    {
        sols = 1;
        x1 = double (-b)/(2*a);
        x2 = NAN;
    }
    else if (delta < 0) 
    {
        sols = 0;
        x1 = NAN;
        x2 = NAN;
    }
    else if (delta > 0) 
    {
        sols = 2;
        x1 = double (-b - sqrt(delta))/(2*a);
        x2 = double (-b + sqrt(delta))/(2*a);
    }
    return sols;
}

int main() 
{
    double x1, x2; int r = solve_eq(3, 4, -2, x1, x2); cout << fixed << setprecision(7) << r << ' ' << x1 << ' ' << x2;
    return 0;
}