#include <map>
#include <list>
#include <string>
#include <iostream>
#include <climits>
using namespace std;


string cat_keys(list<map<string, unsigned>> lst) 
{
    unsigned int aux = UINT_MAX;
    string res = "";
    for (auto currmap:lst)
    {
        for(auto kv:currmap)
        {
            if(kv.second<aux)
            {
                aux = kv.second;
                res = "";
                for(auto kv:currmap) {res.append(kv.first);}
            }
        }
    }
    return res;    
}

