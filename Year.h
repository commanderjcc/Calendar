//
// Created by Josh Christensen on 2/28/20.
//

#ifndef CALENDAR_YEAR_H
#define CALENDAR_YEAR_H

#include "Month.h"

class Year {
    public:
        int targetYear;
        Month * months[13];
        Year(int targetYear);
};


#endif //CALENDAR_YEAR_H
