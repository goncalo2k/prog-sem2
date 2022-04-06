#include <iostream>

using namespace std;


    unsigned long hstr_to_integer(const char hstr[]){
        unsigned long n = 0;
        int i = 0;
        while (hstr[i] != '\0')
        {
            if(hstr[i] == 'A' || hstr[i] == 'a') {n = n*16 + 10;}
            else if(hstr[i] == 'B' || hstr[i] == 'b') {n = n*16 + 11;}
            else if(hstr[i] == 'C' || hstr[i] == 'c') {n = n*16 + 12;}
            else if(hstr[i] == 'D' || hstr[i] == 'd') {n = n*16 + 13;}  
            else if(hstr[i] == 'E' || hstr[i] == 'e') {n = n*16 + 14;}
            else if(hstr[i] == 'F' || hstr[i] == 'f') {n = n*16 + 15;}
            else{n = n*16 + (hstr[i] - '0');}
            i++;
        } 
        return n;
    }

int main(){
    cout << hstr_to_integer("19"); 
    return 0;
}