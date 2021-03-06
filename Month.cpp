//
// Created by Josh Christensen on 2/27/20.
//

#include "Month.h"

#ifndef CALENDAR_MONTH
#define CALENDAR_MONTH

using namespace std;

Month::Month(short month, int year) {
    if (month == 2) {
        if (year % 400 == 0) {
            days = 29;
        } else if (year % 100 == 0) {
            days = 28;
        } else if (year % 4 == 0) {
            days = 29;
        } else {
            days = 28;
        }
    } else {
        if (month > 7) {
            month -= 7;
        }
        if (month % 2 == 1) {
            days = 31;
        } else {
            days = 30;
        }
    }

    for (int day = 1; day <= days; day++) {
        Date * newDate = new Date(month, day, year);
        int dayOfWeek = newDate->getDayOfWeek();
        dates[day] = newDate;
        datesByDayOfWeek[dayOfWeek][numDaysofDayOfWeek[dayOfWeek]] = newDate;
        newDate->nthDayOfWeek = numDaysofDayOfWeek[dayOfWeek];
        numDaysofDayOfWeek[dayOfWeek]++;
    }
}

#endif //CALENDAR_MONTH