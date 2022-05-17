#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

#include "Point2d.h"

int main()
{
    Point2d a { 1.0, 2.1 };
    a.translate({ -0.3, 0.5 });
    cout << fixed << setprecision(2) << a.get_x() << ' ' << a.get_y() << '\n';
    return 0;
}