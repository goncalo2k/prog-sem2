#include <iostream>
#include "alist.cpp"

using namespace std;

void append(alist* a, const alist* b)
{
    if (a -> elements == nullptr) {a -> elements = b -> elements;}
    else if (b -> elements == nullptr) {return;}
    const int size = a -> size + b -> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++)
    {
        if (i < a -> size) {arr[i] = (a -> elements[i]);}
        else {arr[i] = (b -> elements[i - a -> size]);}
    }
    
    delete [] a -> elements; 
    a -> elements = arr;
    a -> size = size;
    return;
}

int main()
{
    alist* a = empty();
    const int nB = 2;
    int eB[nB] = { 1, 2 };
    const alist* b = build(nB, eB);
    append(a, b);
    print(a);
    destroy(a);
    destroy(b);
    return 0;
}