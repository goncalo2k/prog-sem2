#include <iostream>

using namespace std;

int main() 
{
    char n;
    cin >> n;
    if (('A' <= n && n <= 'Z' ) || ('a' <= n && n <= 'z'))
    {
        cout << "LETTER";
    }
    else if ('0' <= n && n <= '9') cout << "DIGIT";
    else cout << "OTHER";
    return 0;
}