//
// Created by Josh Christensen on 2/27/20.
//

#ifndef CALENDAR_COLOR_H
#define CALENDAR_COLOR_H

#include <iostream>

class Color {
protected:
    uint8_t r;
    uint8_t g;
    uint8_t b;
public:
    Color(uint8_t red, uint8_t green, uint8_t blue);

    std::string getForegroundString();

    std::string getBackgroundString();
};

#endif //CALENDAR_COLOR_H
