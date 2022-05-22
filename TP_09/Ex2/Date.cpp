#include <iostream>
#include "Date.h"

Date::Date() {
    this->year_ = 1;
    this-> month_ = 1;
    this->day_ = 1;
}
Date::Date(int year, int month, int day) {
    this->year_ = year;
    this-> month_ = month;
    this->day_ = day;
}

int Date::year() const { return this->year_;}  
int Date::month() const { return this->month_;}
int Date::day() const { return this->day_;}

bool Date::is_before(const Date &date) const{
	if (year_ < date.year_) return true;
	if (year_ > date.year_) return false;
	if (month_ < date.month_) return true;
	if (month_ > date.month_) return false;
	if (day_ < date.day_) return true;
	if (day_ > date.day_) return false;
	return false;
}