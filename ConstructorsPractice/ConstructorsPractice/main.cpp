//
//  main.cpp
//  ConstructorsPractice
//
//  Created by d.d on 9/16/15.
//  Copyright (c) 2015 Nikhil Jain. All rights reserved.
//

#include <iostream>
using namespace std;

/***********************************************
 *  Class Definition                           *
 ***********************************************/
class Date {
    
private:
    int month;
    int day;
    int year;
    
public:
    Date();                                     // default constructors
    Date(int, int, int);                        // constructor with arguments
    Date(const Date&);                                // copy constructor
    void showDate();
    
};

/***********************************************
 *  Class Implementation                       *
 ***********************************************/

// Default constructor
Date::Date() {
    this->month = 1;
    this->day = 1;
    this->year = 1999;
}

// Constructor with arguments
Date::Date(int month, int day, int year) {
    this->month = month;
    this->day = day;
    this->year = year;
}

// Copy constructor
Date::Date(const Date& date) {
    month = date.month;
    day = date.day;
    year = date.year;
}

// Shows the date
void Date::showDate() {
    cout << month << "/" << day << "/" << year % 1000 << endl;
}

/***********************************************
 *  Driver Program                             *
 ***********************************************/

int main() {
    
    // no parenthesis for default constructor
    Date defaultDate;
    
    // object with arguments
    Date customDate(12, 4, 2015);
    
    // copy of customDate
    Date copyDate(customDate);
    
    // Display all the dates
    cout << "Default Date" << endl;
    defaultDate.showDate();
    
    cout << "Custom Date" << endl;
    customDate.showDate();
    
    cout << "Copy of Custom Date" << endl;
    copyDate.showDate();
    
}
