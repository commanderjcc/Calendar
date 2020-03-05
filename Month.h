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

public:
    short days = 0;
    int numDaysofDayOfWeek[7] = {0, 0, 0, 0, 0, 0, 0};
    Date * dates[32];
    Date * datesByDayOfWeek[7][6];

    Month(short month, int year);
};

#endif //CALENDAR_MONTH_H