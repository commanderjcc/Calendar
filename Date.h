//
// Created by Josh Christensen on 2/27/20.
//

#ifndef CALENDAR_DATE_H
#define CALENDAR_DATE_H

#include <cmath>
#include <string>

class Date {
private:
    const short bubbleNumStart = 0x245F;
    const short bubbleHighNumStart = 0x3250 - 20; //minus 20 for starting the new section at 20
public:
    uint8_t day;
    uint8_t month;
    int year;
    Date(uint8_t m, uint8_t d, int y);

    int getDayOfWeek();

    std::string getBubbleNumber();

    static void GetUnicodeChar(unsigned int code, char chars[5]);
};

#endif //CALENDAR_DATE_H
