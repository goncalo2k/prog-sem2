#include <iostream>

using namespace std;

unsigned long hstr_to_integer(const char hstr[]) 
{
    int i = 0;
    unsigned long res = 0;
    while (hstr[i] != '\0')
    {
       if (hstr[i] == 'A' || hstr[i] == 'a')
       {
           res = res*16 + 10;
       }
    
       else if (hstr[i] == 'B' || hstr[i] == 'b')
       {
           res = res*16 + 11;
       }

       else if (hstr[i] == 'C' || hstr[i] == 'c')
       {
           res = res*16 + 12;
       }

       else if (hstr[i] == 'D' || hstr[i] == 'd')
       {
           res = res*16 + 13;
       }
       
       else if (hstr[i] == 'E' || hstr[i] == 'e')
       {
           res = res*16 + 14;
       }

       else if (hstr[i] == 'F' || hstr[i] == 'f')
       {
           res = res*16 + 15;
       }

       else {res = res*16 + (hstr[i] - '0');}
       i++;
    }
    return res;
}

int main() 
{
    return 0;
}