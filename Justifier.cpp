// Name: Joshua Christensen
// Project: mtime-parabola
// File: main.cpp
// Purposes: calc elapsed time for military times, calc roots for parabola, calc intersects for a system of equation
// Date: 2/4/20

#ifndef CALENDAR_JUSTIFIER
#define CALENDAR_JUSTIFIER

#include "Justifier.h"

using namespace std;

bool Justifier::updateLayout() {
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

void Justifier::toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
}

void Justifier::toUpper(string str) {
    transform(str.begin(), str.end(), str.begin(), ::toupper);
}

int Justifier::length(string str) {

}

Justifier::Justifier() {
    backgroundColor = new Color(255, 255, 255);
    foregroundColor = new Color(0, 0, 0);
    justifyDirection = 'l';
    width = 80;
    newLine = true;
    fill = ' ';
    numOutputFormat = 'a';
    forceDecimal = false;
    precision = 2;
    layoutIsUpdated = false;
}


void Justifier::setBackground(Color *colorCode) {
    layoutIsUpdated = false;
    backgroundColor = colorCode;
};

void Justifier::setForeground(Color *colorCode) {
    layoutIsUpdated = false;
    foregroundColor = colorCode;
};

void Justifier::setDirection(string direction) {
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

void Justifier::setWidth(int w) {
    layoutIsUpdated = false;
    width = w;
};

void Justifier::setNewLine(bool shouldNewLine) {
    layoutIsUpdated = false;
    newLine = shouldNewLine;
};

void Justifier::setFill(char character) {
    layoutIsUpdated = false;
    fill = character;
};

void Justifier::setNumOutputFormat(string format) {
    layoutIsUpdated = false;
    toLower(format);

    if (format == "f" | format == "fixed" | format == "d" | format == "decimal") {
        justifyDirection = 'f';
    } else if (format == "s" | format == "scientific") {
        justifyDirection = 's';
    } else {
        justifyDirection = 'a';
    }
};

void Justifier::showDecimal() {
    layoutIsUpdated = false;
    forceDecimal = true;
};

void Justifier::hideDecimal() {
    layoutIsUpdated = false;
    forceDecimal = false;
};

void Justifier::setPrecision(int decimalPlaces) {
    layoutIsUpdated = false;
    precision = 2;
};


void Justifier::line() {
    this->text("");
};

void Justifier::text(string str) {
    if (!layoutIsUpdated) {
        updateLayout();
    }

    if (justifyDirection == 'c') {
        int availableSpace = width - str.length(); //find the amount of space that is available
        if (availableSpace < 0) { //if the space for justifying is less than 0
            cout << str; //just output as default
            return;
        }
        int stringStartLength = availableSpace / 2; //the width before the num
        int stringEndLength =
                availableSpace - stringStartLength; //the width after the num, uses subtraction to avoid rounding errors
        cout << setiosflags(ios::left) << setfill(fill) << setw(stringStartLength) << "" << str << setw(stringEndLength)
             << ""; //couts the str sandwiched between to pads of setw()
    } else {
        cout << str; // justify left
    }

    if (newLine) {
        cout << "\n"; //if there is supposed to be a new line after the phrase, then send it out
    }
};

void Justifier::number(double num) {
    if (justifyDirection == 'c') {
        int availableSpace = width - ((int) (log10(num) + 3)); //find the amount of space that is available
        if (availableSpace < 0) { //if the space for justifying is less than 0
            cout << num; //just output as left justify
            return;
        }
        int stringStartLength = availableSpace / 2; //the width before the num
        int stringEndLength =
                availableSpace - stringStartLength; //the width after the num, uses subtraction to avoid rounding errors
        cout << setiosflags(ios::left) << setfill(fill) << setw(stringStartLength) << "" << num << setw(stringEndLength)
             << ""; //couts the num sandwiched between to pads of setw()
    } else {
        cout << num; //justify Left
    }

    if (newLine) {
        cout << endl;
    }
};

double Justifier::formatNum(double num) {
    num = num * pow(10, precision);
    num = round(num);
    num = num / pow(10, precision);
    return num;
};



#endif //CALENDAR_JUSTIFIER