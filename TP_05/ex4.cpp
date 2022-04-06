#include <iostream>
using namespace std;
 
//! Complex number
struct complex {
  int real;  // Real part
  int img;   // Imaginary part
};
 
//! Print array of complex numbers.
void print(const complex z[], int n) {
  cout << "[ ";
  for (int i = 0; i < n; i++) {
    if (z[i].real == 0 && z[i].img == 0) 
      cout << 0;
    else {
      if (z[i].real != 0)
        cout << z[i].real;
      if (z[i].img > 0) 
        cout  << '+' << z[i].img << 'i';
      else if (z[i].img < 0) 
        cout  << z[i].img << 'i';
    }
    cout << ' ';
  }
  cout << "]\n";
}

complex complex_sum(complex c, complex d)
{
    complex res = {c.real + d.real,c.img + d.img};
    return res;
}

complex complex_mul(complex c, complex d)
{
    complex res = {c.real * d.real - c.img * d.img, c.real * d.img + c.img * d.real};
    return res;
}

complex mandel_n(int n, complex c)
{
    if (n <= 0) 
    {
        return {0,0};
    }
    else 
    {
        return complex_sum(complex_mul(mandel_n(n-1,c), mandel_n(n-1,c)), c);
    }
}

void mandel(complex c, int n, complex z[])
{
    for (int i = 0; i < n; i++)
    {
      z[i] = mandel_n(i,c);
    }
    return;
}
int main() 
{
  complex c = { 1, 1 };
  const int n = 3;
  complex z[n];
  mandel(c, n, z);
  print(z, n);
  return 0;
}