#include <iostream>

using namespace std;

bool anagrams(const char a[], const char b[], int& n) 
{
    int i = 0;
    int arr[26] = {0};
    while (a[i] != 0) 
    {
        char index_a = a[i];
        if (index_a >= 'A' && index_a <= 'Z') 
        {
            arr[index_a - 65]++;
        }
        else if (index_a >= 'a' && index_a <= 'z') 
        {
            arr[index_a - 97]++;
        }
        i++;
    }
    i = 0;
    while (b[i] != 0) 
    {
        char index_b = b[i];
        if (index_b >= 'A' && index_b <= 'Z') 
        {
            arr[index_b - 65]--;
        }
        else if (index_b >= 'a' && index_b <= 'z') 
        {
            arr[index_b - 97]--;
        }
        i++;
    }

    int res = 0;

    for (int j = 0; j < 26; j++) 
    {
        if (arr[j] >0) {res += arr[j];} else {res -= arr[j];}

    }
    n = res;
    return (res != 0) ? false : true;
}

int main() 
{
    char a[] = "";
    char b[] = "";
    int n = -1;
    bool r = anagrams(a, b, n);
    cout << '\"' << a << '\"' << ' '
     << '\"' << b << '\"' << ' '
     << boolalpha << r << ' ' << n << '\n';
    return 0;
}