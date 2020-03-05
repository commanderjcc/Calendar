//
// Created by Josh Christensen on 3/2/20.
//

#ifndef CALENDAR_CALENDAR_H
#define CALENDAR_CALENDAR_H

#include <iostream>
#include "Year.h"
#include "Justifier.h"

class Calendar {
    int startingYear;
    std::string holidays[13][32];
public:
    int targetYear;
    short targetMonth;
    short targetDay;

    std::string cellTemplate[6] = {u8"╭", u8"─", u8"╮",
                                   u8"|", u8"╰",u8"╯"};

    Year * years[100];
    Calendar(short targetDay, short targetMonth, int targetYear);

    std::string gT(short);

    void drawHeader();

    std::string drawLine();

    std::string drawRow(Date * dates[7]);

    std::string drawCalendar();
};


#endif //CALENDAR_CALENDAR_H
