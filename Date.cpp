//
// Created by Josh Christensen on 2/27/20.
//

#include <cstdint>
#include "Date.h"

#ifndef CALENDAR_MOMENT
#define CALENDAR_MOMENT

Date::Date(uint8_t m, uint8_t d, int y) {
    month = m;
    day = d;
    year = y;
}

int Date::getDayOfWeek() {
    int d = day;
    int m = month;
    int y = year;

    if (m <= 2) {
        m += 12;
        y--;
    }

    int dow;
    char daysOfTheWeek[7][10] = {"Sunday", "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int D = y % 100;
    int C = floor(y / 100);

    dow = int((d + floor(13 * (m + 1) / 5) + D + floor(D / 4) + floor(C / 4) + 5 * C) + 6) % 7;

    return dow;
}

void Date::GetUnicodeChar(unsigned int code, char *chars) {
    if (code <= 0x7F) {
        chars[0] = (code & 0x7F); chars[1] = '\0';
    } else if (code <= 0x7FF) {
        // one continuation byte
        chars[1] = 0x80 | (code & 0x3F); code = (code >> 6);
        chars[0] = 0xC0 | (code & 0x1F); chars[2] = '\0';
    } else if (code <= 0xFFFF) {
        // two continuation bytes
        chars[2] = 0x80 | (code & 0x3F); code = (code >> 6);
        chars[1] = 0x80 | (code & 0x3F); code = (code >> 6);
        chars[0] = 0xE0 | (code & 0xF); chars[3] = '\0';
    } else if (code <= 0x10FFFF) {
        // three continuation bytes
        chars[3] = 0x80 | (code & 0x3F); code = (code >> 6);
        chars[2] = 0x80 | (code & 0x3F); code = (code >> 6);
        chars[1] = 0x80 | (code & 0x3F); code = (code >> 6);
        chars[0] = 0xF0 | (code & 0x7); chars[4] = '\0';
    } else {
        // unicode replacement character
        chars[2] = 0xEF; chars[1] = 0xBF; chars[0] = 0xBD;
        chars[3] = '\0';
    }
}

std::string Date::getBubbleNumber() {
    char chars[5];
    Date::GetUnicodeChar(bubbleNumStart + day,chars);
    return std::string(chars);
}

#endif //CALENDAR_MOMENT


