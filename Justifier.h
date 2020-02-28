//
// Created by Josh Christensen on 2/27/20.
//

#ifndef CALENDAR_JUSTIFIER_H
#define CALENDAR_JUSTIFIER_H

#ifndef INCL_IOSTREAM
#define INCL_IOSTREAM
#include <iostream>
#endif //INCL_IOSTREAM

#ifndef INCL_IOMANIP
#define INCL_IOMANIP
#include <iomanip>
#endif //INCL_IOMANIP

#ifndef INCL_CMATH
#define INCL_CMATH
#include <cmath>
#endif //INCL_CMATH

#ifndef INCL_COLOR
#define INCL_COLOR
#include "Color.h"
#endif //INCL_COLOR

using namespace std;

class Justifier {
protected:
    bool layoutIsUpdated;

    bool updateLayout() {
        cout << resetiosflags(ios::left | ios::right | ios::fixed | ios::showpoint | ios::scientific); //reset everything

        //set justification direction
        if (justifyDirection == 'r') {
            cout << setiosflags(ios::right); //justify right
        } else {
            cout << setiosflags(ios::left); //both 'l' and 'c', or any extraneous values, resolve to left as default
        }

        //set number format
        if (numOutputFormat == 'f') {
            cout << setiosflags(ios::fixed); //force standard output
        } else if (numOutputFormat == 's') {
            cout << setiosflags(ios::scientific); //force scientific
        } // leave at auto for all other values

        //set showpoint if forceDecimal is true
        if (forceDecimal) {
            cout << setiosflags(ios::showpoint); //force decimals with ios::showpoint
        }

        cout << setprecision(precision) << setfill(fill) << setw(width); //set precision, fill, and width

        layoutIsUpdated = true;
        return true;
    }

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
    static void toLower(string str) {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }

    static void toUpper(string str) {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }

    static int length(string str) {

    }

    Justifier() {
        backgroundColor = new Color(255,255,255);
        foregroundColor = new Color(0,0,0);
        justifyDirection = 'l';
        width = 80;
        newLine = true;
        fill = ' ';
        numOutputFormat = 'a';
        forceDecimal = false;
        precision = 2;
        layoutIsUpdated = false;
    }


    void setBackground(Color *colorCode) {
        layoutIsUpdated = false;
        backgroundColor = colorCode;
    };

    void setForeground(Color *colorCode) {
        layoutIsUpdated = false;
        foregroundColor = colorCode;
    };

    void setDirection(string direction) {
        layoutIsUpdated = false;
        toLower(direction);

        if (direction == "r" | direction == "right") {
            justifyDirection = 'r';
        } else if (direction == "c" | direction == "center") {
            justifyDirection = 'c';
        } else {
            justifyDirection = 'l';
        }
    };

    void setWidth(int w) {
        layoutIsUpdated = false;
        width = w;
    }

    void setNewLine(bool shouldNewLine) {
        layoutIsUpdated = false;
        newLine = shouldNewLine;
    }

    void setFill(char character) {
        layoutIsUpdated = false;
        fill = character;
    }

    void setNumOutputFormat(string format) {
        layoutIsUpdated = false;
        toLower(format);

        if (format == "f" | format == "fixed" | format == "d" | format == "decimal") {
            justifyDirection = 'f';
        } else if (format == "s" | format == "scientific") {
            justifyDirection = 's';
        } else {
            justifyDirection = 'a';
        }
    }

    void showDecimal() {
        layoutIsUpdated = false;
        forceDecimal = true;
    }

    void hideDecimal() {
        layoutIsUpdated = false;
        forceDecimal = false;
    }

    void setPrecision(int decimalPlaces) {
        layoutIsUpdated = false;
        precision = 2;
    }


    void line(){
        this->text("");
    };

    void text(string str) {
        if (!layoutIsUpdated) {
            updateLayout();
        }

        if (justifyDirection == 'c') {
            int availableSpace = width - str.length(); //find the amount of space that is available
            if( availableSpace < 0) { //if the space for justifying is less than 0
                cout << str; //just output as default
                return;
            }
            int stringStartLength = availableSpace/2; //the width before the num
            int stringEndLength = availableSpace-stringStartLength; //the width after the num, uses subtraction to avoid rounding errors
            cout << setiosflags(ios::left) << setfill(fill) << setw(stringStartLength) << "" << str << setw(stringEndLength) << ""; //couts the str sandwiched between to pads of setw()
        } else {
            cout << str; // justify left
        }

        if (newLine) {
            cout << "\n"; //if there is supposed to be a new line after the phrase, then send it out
        }
    };

    void number(double num) {
        if (justifyDirection == 'c') {
            int availableSpace = width - ((int)(log10(num)+3)); //find the amount of space that is available
            if( availableSpace < 0) { //if the space for justifying is less than 0
                cout << num; //just output as left justify
                return;
            }
            int stringStartLength = availableSpace/2; //the width before the num
            int stringEndLength = availableSpace-stringStartLength; //the width after the num, uses subtraction to avoid rounding errors
            cout << setiosflags(ios::left) << setfill(fill) << setw(stringStartLength) << "" << num << setw(stringEndLength) << ""; //couts the num sandwiched between to pads of setw()
        } else {
            cout << num; //justify Left
        }

        if (newLine) {
            cout << endl;
        }
    };

    double formatNum(double num){
        num = num * pow(10,precision);
        num = round(num);
        num = num / pow(10,precision);
        return num;
    }
};

#endif //CALENDAR_JUSTIFIER_H
