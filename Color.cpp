//
// Created by Josh Christensen on 2/27/20.
//
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


class Color {
protected:
    uint8_t r;
    uint8_t g;
    uint8_t b;
public:
    Color(uint8_t red, uint8_t green, uint8_t blue) {
        r = red;
        g = green;
        b = blue;
    }

    string getForegroundString() {
        return "\x1b[38;5;" + to_string(r) + to_string(g) + to_string(b) + "m";
    }

    string getBackgroundString() {
        return "\x1b[48;5;" + to_string(r) + to_string(g) + to_string(b) + "m";
    }
};