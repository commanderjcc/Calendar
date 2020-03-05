//
// Created by Josh Christensen on 3/2/20.
//

#ifndef CALENDAR_CALENDAR
#define CALENDAR_CALENDAR
#include "Calendar.h"

using namespace std;

string Calendar::gT(short pos) {
    return Calendar::cellTemplate[pos];
}

Calendar::Calendar(short targetDay, short targetMonth, int targetYear) {
    this->targetDay = targetDay;
    this->targetMonth = targetMonth;
    this->targetYear = targetYear;
    this->startingYear = targetYear - 1;
    for (int i = 0; i < 2; i++) {
        years[i] = new Year(i + startingYear);
    }

    for (int i = 1; i <= 12; i++) {
        for (int j = 1; j <= 31; j++) {
            holidays[i][j] = "                ";
        }
    }

    holidays[1][21]  = "▹ Hugging Day   ";
    holidays[2][14]  = "▹ Valentines day";
    holidays[3][17]  = "▹ St. Patricks  ";
    holidays[4][15]  = "▹ Tax Day       ";
    holidays[5][5]   = "▹ Cinco De Mayo ";
    holidays[6][6]   = "▹ D-Day         ";
    holidays[7][4]   = "▹ Independence  ";
    holidays[8][26]  = "▹ Women Equality";
    holidays[9][2]   = "▹ Labor Day     ";
    holidays[10][31] = "▹ Halloween     ";
    holidays[11][28] = "▹ Thanksgiving  ";
    holidays[11][29] = "▹ Black Friday  ";
    holidays[12][25] = "▹ Christmas     ";
    holidays[12][31] = "▹ New Years Eve ";
}

string Calendar::drawLine() {
    string temp;
    for (int i = 0; i < 16; i++) temp += gT(1);
    return temp;
}

void Calendar::drawHeader() {
    string months[13] = {"","January","February","March","April","May","June","July","August","September","October","November","December"};
    string days[7] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    auto temp = new Justifier();
    temp->setWidth(140);
    temp->setDirection("c");
    temp->text(months[targetMonth]);
    temp->setFill('_');
    temp->line();
    cout << endl;
    temp->setFill(' ');
    temp->setWidth(20);
    temp->setNewLine(false);
    for (const auto & day : days) {
        temp->text(day);
    }
    cout << endl;
    temp->setWidth(140);
    temp->setFill('_');
    temp->line();
    cout << endl;

}

string Calendar::drawRow(Date * dates[7]) {
    string out;

    for (int i = 0; i < 7; i++)out += " " + gT(0) + drawLine() + gT(2) + " ";
    out += "\n";
    for (int i = 0; i < 7; i++) {
        out += " " + gT(3) + dates[i]->getBubbleNumber();
        out += dates[i]->day > 20 ? "             " : "              ";
        out += " " + gT(3) + " ";
    }
    out += "\n";
    for (int i = 0; i < 7; i++)out += " " + gT(3) + "                " + gT(3) + " ";
    out += "\n";
    for (int i = 0; i < 7; i++)
        out += " " + gT(3) + holidays[dates[i]->month][dates[i]->day] + gT(3) + " ";
    out += "\n";
    for (int i = 0; i < 7; i++)out += " " + gT(3) + "                " + gT(3) + " ";
    out += "\n";
    for (int i = 0; i < 7; i++)out += " " + gT(4) + drawLine() + gT(5) + " ";
    out += "\n";

    return out;
}

string Calendar::drawCalendar() {
    string out;
    auto &daysOfMonth = years[targetYear - startingYear]->months[targetMonth]->dates;
    Date *dates[7];
    int year = targetYear;
    short month = targetMonth;
    short day = 1;
    short pos = 0;

    drawHeader();

    if (daysOfMonth[1]->getDayOfWeek() != 0) {
        if (month <= 1) {
            month = 12;
            year--;
        } else {
            month--;
        }

        day = years[year - startingYear]->months[month]->days - daysOfMonth[1]->getDayOfWeek() + 1;
        while (day <= years[year - startingYear]->months[month]->days) {
            dates[pos] = years[year - startingYear]->months[month]->dates[day];
            pos++;
            day++;
        }
        day = 1;
    }

    while (day + 7 <= years[targetYear - startingYear]->months[targetMonth]->days) {
        while (pos < 7) {
            dates[pos] = daysOfMonth[day];
            pos++;
            day++;
        }
        pos = 0;
        out += drawRow(dates);
    }

    while (day <= years[targetYear - startingYear]->months[targetMonth]->days) {
        dates[pos] = daysOfMonth[day];
        pos++;
        day++;
    }

    day = 1;
    if(month == 12) {
        month = 1;
        year++;
    } else {
        month++;
    }

    while (pos < 7) {
        dates[pos] = years[year - startingYear]->months[month]->dates[day];
        pos++;
        day++;
    }

    out += drawRow(dates);

    out += "\n---Holidays---\n";
    switch(targetMonth) {
        case 1: out += "January 1st - New Years"; break;
        case 2: out += "February 14th - Valentine's Day"; break;
        case 3: out += "March 17th - Saint Patrick's Day"; break;
        case 4: out += "April 15th - Tax Day"; break;
        case 5: out += "May 5th - Cinco de Mayo"; break;
        case 6: out += "June 6th - D-Day"; break;
        case 7: out += "July 4th - Independence Day"; break;
        case 8: out += "August 26th - Women's Equality Day"; break;
        case 9: out += "September 2nd - Labor Day"; break;
        case 10: out += "October 31st - Halloween"; break;
        case 11: out += "November 28th - Thanksgiving \nNovember 29th - Black Friday"; break;
        case 12: out += "December 25th - Christmas \nDecember 31st - New Year's Eve"; break;
    }

    out += "\n\n";

    return out;
}

#endif
