//
// Created by Josh Christensen on 2/27/20.
//

#include "Date.h"

#ifndef CALENDAR_MOMENT
#define CALENDAR_MOMENT

Date::Date(uint8_t m, uint8_t d, int y) {
    month = m;
    day = d;
    year = y;
}

int Date::getDayOfWeek() {
    int d = day;
    int m = month;
    int y = year;

    if (m <= 2) {
        m += 12;
        y--;
    }

    int dow;
    char daysOfTheWeek[7][10] = {"Sunday", "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int D = y % 100;
    int C = floor(y / 100);

    dow = int((d + floor(13 * (m + 1) / 5) + D + floor(D / 4) + floor(C / 4) + 5 * C) + 6) % 7;

    return dow;
}

#endif //CALENDAR_MOMENT