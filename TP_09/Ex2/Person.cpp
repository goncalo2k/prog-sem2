#include <iostream>
#include "Person.h"
#include "Date.h"

using namespace std;

Person::Person() {
    this->name_ = "NO_NAME";
    this-> birth_date_ = Date();
}
Person::Person(const std::string& name, const Date& birth_date) {
    this->name_ = name;
    this-> birth_date_ = birth_date;
}

std::string Person::get_name() const { return this->name_;}  
Date Person::get_birth_date() const { return this->birth_date_;}
