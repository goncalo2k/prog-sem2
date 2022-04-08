#include <iostream>

using namespace std;

unsigned long comb(unsigned long n, int k){
    unsigned long top = 1, bot = 1;
    for (int i = 1; i <= k; i++){
        top *= n - (i-1);
        bot *= i;
    }
    return top / bot;
}

unsigned long bell(unsigned long n){
    if (n<2) return 1;
    int ans = 0;
    for (unsigned long i = 0; i < n; i++){
        ans += (comb(n-1, i))*bell(i);
    }
    return ans;
}

int main() 
{
    return 0;
}