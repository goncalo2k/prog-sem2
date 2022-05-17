#include <iostream>
#include <iomanip>

//! A simple class Date definition
class Date {
  public:
    // constructors
    Date();
    Date(int year, int month, int day);
    // accessors
    int get_year() const;
    int get_month() const;
    int get_day() const;
    // write the date as "yyyy/mm/dd"
    void write() const; 

  private:
    int year;
    int month;
    int day;
    // compute the number of days of month/year, for internal use only
    static int days_in_month(int year, int month);
};

Date::Date() {
  year = 1;
  month = 1;
  day = 1;
}
Date::Date(int year, int month, int day) {
  this->year = year;
  this->month = month;
  this->day = day;
}

int Date::get_year() const {
  return year;
}

int Date::get_month() const {
  return month; 
}

int Date::get_day() const {
  return day;
}

void Date::write() const {
  std::cout << std::setfill('0')
            << std::setw(4) << year << '/'
            << std::setw(2) << month << '/'
            << std::setw(2) << day;
}

int Date::days_in_month(int year, int month) {
  int n_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (month == 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    return 29;
  return n_days[month - 1];
}

// Redefine assert() for internal use only (not using cerr in CodeRunner tests)
#define assert(e, m) { if (! (e)) std::cout << m; }