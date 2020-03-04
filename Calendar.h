//
// Created by Josh Christensen on 3/2/20.
//

#ifndef CALENDAR_CALENDAR_H
#define CALENDAR_CALENDAR_H

#include <iostream>
#include "Year.h"
#include "Justifier.h"

class Calendar {
public:
    std::string cellTemplate[6] = {u8"╭", u8"─", u8"╮",
                                   u8"|", u8"╰",u8"╯"};

    Year * years[100];
    explicit Calendar(int targetYear = 2020);

    std:: string gT(short);
};


#endif //CALENDAR_CALENDAR_H
