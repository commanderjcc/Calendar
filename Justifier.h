//
// Created by Josh Christensen on 2/27/20.
//

#ifndef CALENDAR_JUSTIFIER_H
#define CALENDAR_JUSTIFIER_H

#include <iostream>
#include <iomanip>
#include <cmath>
#include "Color.h"

class Justifier {
protected:
    bool layoutIsUpdated;

    bool updateLayout();

    Color *backgroundColor;
    Color *foregroundColor;
    char justifyDirection;
    int width;
    bool newLine;
    char fill;
    char numOutputFormat;
    bool forceDecimal;
    int precision;
public:
    static void toLower(std::string str);

    static void toUpper(std::string str);

    static int length(std::string str);

    Justifier();

    void setBackground(Color *colorCode);

    void setForeground(Color *colorCode);

    void setDirection(std::string direction);

    void setWidth(int w);

    void setNewLine(bool shouldNewLine);

    void setFill(char character);

    void setNumOutputFormat(std::string format);

    void showDecimal();

    void hideDecimal();

    void setPrecision(int decimalPlaces);


    void line();

    void text(std::string str);

    void number(double num);

    double formatNum(double num);
};

#endif //CALENDAR_JUSTIFIER_H
