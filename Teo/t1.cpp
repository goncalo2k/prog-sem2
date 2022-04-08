#include <iostream>

using namespace std;

namespace a {
  int f(int x, int y = 3) { return x + y; }
  double f(int a, int b) {return a+b;}
}
namespace b {
  int f(int x=1) { return x + 1; }
  double f(int x, double y) { return x + y; }
  //double f(int a, int b=1) {return a+b;}
}
int f(int x) {
  return x;
}


int main() 
{
    return 0;
}
