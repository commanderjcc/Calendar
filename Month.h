//
// Created by Josh Christensen on 2/27/20.
//

#ifndef CALENDAR_MONTH_H
#define CALENDAR_MONTH_H

#include <iostream>
#include <iomanip>
#include <cmath>
#include "Date.h"

class Month {
    int numDaysofDayOfWeek[7] = {0, 0, 0, 0, 0, 0, 0};
public:
    Date * dates[31];
    Date * datesByDayOfWeek[7][6];
    int length;

    Month(short month, int year);
};

#endif //CALENDAR_MONTH_H