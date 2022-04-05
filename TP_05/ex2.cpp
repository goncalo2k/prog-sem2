#include <iostream>

using namespace std;

void remove_duplicates(int a[], int& size)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == a[i+1])
        {
            for (int k = i+1; i < size; k++)
            {
                a[k] = a[k+1];
                size -= 1;
            }
        }
    }   
}

int main()
{
    return 0;
}