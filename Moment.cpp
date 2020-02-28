//
// Created by Josh Christensen on 2/27/20.
//

#include "Moment.h"

Moment::Moment(uint4 m, uint8 d, int y) {
    month = m;
    day = d;
    year = y;
}

int Moment::getDayOfWeek() {
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