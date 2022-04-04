#include <iostream>
#include "svnode.cpp"

using namespace std;

svnode* sum(const svnode* a, const svnode* b)
{
    if (a == nullptr && b == nullptr) return nullptr;
    svnode* c = nullptr;
    while (a != nullptr && b != nullptr) {
        if (a->position == b->position) {
            if (a->value + b->value != 0) c = build(a->position, a->value + b->value, c);
            a = a->next;
            b = b->next;
        }
        else if (a->position < b->position) {
            c = build(a->position, a->value, c);
            a = a->next;
        }
        else {
            c = build(b->position, b->value, c);
            b = b->next;
        }
    }
    while (a != nullptr) {
        c = build(a->position, a->value, c);
        a = a->next;
    }
    while (b != nullptr) {
        c = build(b->position, b->value, c);
        b = b->next;
    }
    return c;
}


int main()
{
    return 0;
}