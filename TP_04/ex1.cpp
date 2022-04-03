#include <iostream>
#include "alist.cpp"

using namespace std;

void append(alist* a, const alist* b)
{   
    const int size = a -> size + b -> size;
    int* arr = new int[size];

    int i = 0;
    for (i = 0; i < a->size; i++){
        arr[i] = a->elements[i];
    }

    for (int j = 0; j < b->size; j++){
        arr[i++] = b->elements[j];
    }

    delete [] a->elements;
    a -> size = size;
    a -> elements = arr;

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
