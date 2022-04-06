#include <iostream>
#include "dlnode.cpp"

using namespace std;

dlnode* insert(dlnode* dln, int k, int v)
{
    if (dln == nullptr) {dlnode* res = build(v,nullptr); res->prev = nullptr; return res;}
    if (k == 0) {dlnode* aux = build(v,dln); dln->prev = aux; return dln;}
    dlnode* first_node = dln;
    dlnode* prev;

    while (k>0)
    {
        if (dln->next == nullptr)
        {
            dlnode* aux = build(v);
            aux->prev = dln;
            return first_node;
        }
        prev = dln;
        dln = dln->next;
        k--;
    }        
    
    dlnode* res = build(v,dln);
    prev->next = res;
    dln->prev = res;
    return first_node;
}

int main()
{
    return 0;
}