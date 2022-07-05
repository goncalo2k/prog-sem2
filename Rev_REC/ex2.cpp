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
    
    if (size <= 1) return;
    int curr, prev = a[0], count = 0, pos = 1;
    for (int i=1; i < size; i++)
    {
        curr = a[i];
        if(curr == prev)
        {
            count++;
        }
        else
        {
            a[pos] = curr;
            pos++;
        }
        prev = curr;
    }
    size -= count;
    
 }