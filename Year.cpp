//
// Created by Josh Christensen on 2/28/20.
//

#ifndef CALENDAR_YEAR
#define CALENDAR_YEAR

#include "Year.h"

Year::Year(int targetYear) {
    this->targetYear = targetYear;
    for (short i = 1; i < 13; i++) {
        months[i] = new Month(i, targetYear);
    }
}

#endif //CALENDAR_YEAR


