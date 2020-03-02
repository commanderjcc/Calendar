//
// Created by Josh Christensen on 3/2/20.
//

#ifndef CALENDAR_CALENDAR
#define CALENDAR_CALENDAR
#include "Calendar.h"


std::string Calendar::gT(short pos) {
    return Calendar::cellTemplate[pos];
}

Calendar::Calendar(int targetYear) {
    int startingYear = targetYear - 500;
    for (int i = 0; i < 1000; i++) {
        years[i] = new Year();
    }
}

#endif


