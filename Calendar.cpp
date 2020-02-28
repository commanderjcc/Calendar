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

wstring Calendar::getTopTemplate() {
    return cellTemplate;
}

#endif //CALENDAR_CALENDAR