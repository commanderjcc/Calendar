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
    Date * dates[31];
    std::string cellTemplate[6] = {u8" ╭────────────────╮ ",
                                   u8" | ",          u8" | ",
                                   u8" ╰────────────────╯ "};
    Month(short month, int year);

    std::string getTopTemplate();
};

#endif //CALENDAR_MONTH_H