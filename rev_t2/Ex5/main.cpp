#include <string>
#include <vector>
#include <iostream>
using namespace std;

struct sm_entry {
  size_t row;
  size_t col;
  int value;
};

typedef vector<sm_entry> smatrix;

//! Print a sparse matrix.
void print(const smatrix& sm) {
  cout << "[ ";
  for (sm_entry e : sm) {
    cout << '(' << e.row << ", " << e.col << ", " << e.value << ") ";
  }
  cout << "]\n";
}

void sum(const smatrix& a, const smatrix& b, smatrix& r) 
{
    for (auto e: a)
    {
        for (auto f : b)
        {
            if (e.row == f.row && e.col == f.col) 
            {
                sm_entry n = {f.row, f.col, f.value + e.value};
                r.insert(n);
            }
            else
            {

            }
        }
    }
    
}