#include <iostream>

using namespace std;

bool leap(int y){
    return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
}

void advance(int delta, int& d, int& m, int& y)
{
    for (int i = 0; i < delta; i++){
        d += 1;
        switch (m){
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (d > 31) {d = 1; m += 1;}
            break;
            case 4: case 6: case 9: case 11:
            if (d > 30) {d = 1; m += 1;}
            break;
            case 2:
            if ((d > 28 and !(leap(y))) or (d > 29 and leap(y))) {d = 1; m += 1;}
            break;
        }
        if (m > 12) {d = 1; m = 1; y += 1;}
    }
}

int main() 
{
    int d = 1, m = 1, y = 2022; advance(0, d, m, y); cout << d << ' ' << m << ' ' << y;
    return 0;
}