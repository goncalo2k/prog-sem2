#include "node.cpp"
#include <iostream>

using namespace std;

node* reverse(const node* n){
if (n == nullptr) return nullptr;
node* aux = new node {n -> value, nullptr, nullptr};
n = n -> next;
while (n != nullptr){
    aux = build(n -> value, aux);
    n = n -> next;
}
return aux;
}

int main() 
{
    node* a = build(1, build(2, build(3, nullptr)));
    node* b = reverse(a);
    print(b);
    destroy(a); destroy(b);
    return 0;
}