#include <iostream>
#include <iomanip>
#include "Date1.h"
 
using namespace std;

bool is_before(const Date& date1, const Date& date2)
{
    bool res = false;
    if (date1.get_year() < date2.get_year()) {res = true;}
    else if (date1.get_year() > date2.get_year()) {res = false;}
    else if (date1.get_year() == date2.get_year()) 
    {
        if (date1.get_month() < date2.get_month()) {res = true;}
        else if (date1.get_month() > date2.get_month()) {res = false;}
        else if (date1.get_month() == date2.get_month())
        {
            if (date1.get_day() < date2.get_day()) {res = true;}
            else if (date1.get_day() >= date2.get_day()) {res = false;}
        }
    }
    return res;
}

int main() {
    return 0;
}