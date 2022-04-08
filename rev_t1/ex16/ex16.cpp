#include <iostream>
#include "alist.cpp"

using namespace std;

void append(alist* a, const alist* b)
{
    const int size = a->size + b->size;
    int* arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        if (i < a->size) arr[i] = a->elements[i];
        else {arr[i] = b->elements[i-(a->size)];}
    }
    delete [] a->elements;
    a->size = size;
    a->elements = arr;
}

int main() 
{
    return 0;
}