#include <iostream>
#include "node.cpp"

using namespace std;

node* remove(int x, node* n)
{
    if (n == nullptr) {return n;}

    node* first_node;

    if (n->value == x)
    {
        first_node = n->next;
        n->next = nullptr;
        destroy(n);
        return first_node;
    }
    first_node = n;
    node* prev;

    while(x != n->value)
    {
        if (n->next == nullptr) {return first_node;}

        prev = n;
        n = n->next;
    }    

    prev->next = n->next;
    n->next = nullptr;
    destroy(n);

    return first_node;
}

int main() 
{
    return 0;
}