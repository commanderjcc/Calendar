//
// Created by Josh Christensen on 2/27/20.
//
#include "Color.h"

using namespace std;

Color::Color(uint8_t red, uint8_t green, uint8_t blue) {
    r = red;
    g = green;
    b = blue;
}

Color::getForegroundString() {
    return "\x1b[38;5;" + to_string(r) + to_string(g) + to_string(b) + "m";
}

Color::getBackgroundString() {
    return "\x1b[48;5;" + to_string(r) + to_string(g) + to_string(b) + "m";
}