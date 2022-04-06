#include <iostream>

using namespace std;

//! Print array.
void print(int a[], int size) {
  cout << "[ ";
  for (int i = 0; i < size; i++)
    cout << a[i] << " ";
  cout << "]";
  cout << endl;
}

void remove_duplicates(int a[], int& size)
{    
    if (size <= 1) {return;}
    int current, prev = a[0], count = 0, pos = 1;
    for (int i = 1; i < size; i++)
    {
        current = a[i];
        if (current == prev) 
        {
            count++;
        }
        else 
        {
            a[pos] = current;
            pos++;
        }
        prev = current;
    }
    size -= count;
}

int main() 
{
    int a[] = { 1, 1, 2, 2, 3, 3, 3 };
    int size = sizeof(a) / sizeof(int);
    remove_duplicates(a, size);
    print(a, size);
    return 0;
}