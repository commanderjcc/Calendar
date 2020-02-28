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
private:
//    Date * dates[31];
    std::wstring cellTemplate = L"\x256D\x2500\x2500\x256ETEST";
public:
    Calendar();\

    std::wstring getTopTemplate();
};

#endif //CALENDAR_CALENDAR_H