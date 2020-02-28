//
// Created by Josh Christensen on 2/27/20.
//

#include "Calendar.h"

#ifndef CALENDAR_CALENDAR
#define CALENDAR_CALENDAR

using namespace std;

Calendar::Calendar() {
//    for(int i = 1; i<32; i++) {
//        dates[i] = new Date(1,i,2020);
//    }
}

string Calendar::getTopTemplate() {
    return this->cellTemplate[0];
}

#endif //CALENDAR_CALENDAR