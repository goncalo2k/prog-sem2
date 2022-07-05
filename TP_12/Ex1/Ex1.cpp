#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cfloat>

using namespace std;

//! Show file name and its contents.
void show_file(const string& file) {
  ifstream in(file);
  cout << "==> " << file << " <==\n";
  for (string line; getline(in, line); ) cout << line << '\n';
}

bool average(const string& input_fname, const string& output_fname) 
{
    ifstream in(input_fname);
    ofstream out(output_fname);
    string line;
    int line_counter=0;

    while (getline(in, line))
    {
        double avg = 0, aux = 0, counter = 0, n;
        line_counter++;
        istringstream iss(line);
        while (iss >> n)
        {
            counter++;
            aux += n;
        }
        avg = aux/counter;
        out << fixed << setprecision(3) << avg << "\n";
        
    }
    out << "lines=" << line_counter;
    return true;   
}

