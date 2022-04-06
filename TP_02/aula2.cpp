#include <iostream>

using namespace std;

void advance(int delta, int& d, int& m, int& y)
{    
    int feb =  ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) ? 29 : 28;
    int m_days[12] {31, feb, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    while (delta > 0)
    {
        while (d < m_days[m-1])
        {
            if (delta > 0)
            {
            d++;
            delta--;
            }
            else break;
        }

        if (delta > 0)
        {
            d = 1;
            delta--;
            m++;
        } else break;

        if(m > 12)
        {
            m = 1;
            y++;
            feb =  ((y % 4 == 0) && ((y % 100 == 0) && (y % 400 != 0))) ? 29 : 28;
        }
        else 
        {
            if (delta > 0)
            {
                continue;
            }
            else break;
        }
    }
    return;
}

int main(){
    int d = 1, m = 1, y = 2024;
    advance(365, d, m, y);
    cout << d << ' ' << m << ' ' << y;
    return 0;
}