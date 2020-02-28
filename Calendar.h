//
// Created by Josh Christensen on 2/27/20.
//

#ifndef CALENDAR_CALENDAR_H
#define CALENDAR_CALENDAR_H

#include <iostream>
#include <iomanip>
#include <cmath>
#include "Date.h"

class Calendar {
public:
//    Date * dates[31];
    std::string cellTemplate[6] = {u8" ╭────────────────╮ ",
                                   u8" │       ①        │ ",
                                   u8" │                │ ",
                                   u8" │                │ ",
                                   u8" │ • Easter       │ ",
                                   u8" ╰────────────────╯ "};
    Calendar();

    std::string getTopTemplate();
};

#endif //CALENDAR_CALENDAR_H