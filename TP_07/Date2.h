
#include <iostream>
#include <iomanip>
#include <string>

class Date {
  public:
    // constructors
    Date();
    Date(int year, int month, int day);
    Date(const std::string& year_month_day);
    // accessors
    int get_year() const;
    int get_month() const;
    int get_day() const;
    // tests date validity
    bool is_valid() const;
    // write the date as "yyyy/mm/dd"
    void write() const;

  private:
    int year;
    int month;
    int day;
    // Compute the number of days of month
    static int num_days(int year, int month);
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