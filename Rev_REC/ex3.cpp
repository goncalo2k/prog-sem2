 #include <iostream>

 using namespace std;

 bool anagrams(const char a[], const char b[], int& n)
 {
    int i = 0;
    char res[26] = {0};
    while (a[i] != '\0')
    {
        if (a[i] >= 'A' && a[i] <= 'Z') 
        {
            res[a[i] - 65]++;
        }
        else if (a[i >= 'a' && a[i] <= 'z'])
        {
            res[a[i] - 97]++;
        }
        i++;
    }
    
    i = 0;

    while (b[i] != '\0')
    {
        if (b[i] >= 'A' && b[i] <= 'Z') 
        {
            res[b[i] - 65]--;
        }
        else if (a[i] >= 'a' && a[i] <= 'z'])
        {
            res[a[i] - 97]--;
        }
        i++;
    }
    int result = 0;

    for (int j = 0; j < 26; j++)
    {
        if (res[j] > 0) {result += res[j];} else {result -= res[j];}
    }
    n = result;
    return (result == 0) ? false : true;
 }