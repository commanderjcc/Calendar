//
// Created by Josh Christensen on 2/27/20.
//

#ifndef CALENDAR_MOMENT_H
#define CALENDAR_MOMENT_H

class Moment {
public:
    uint8 day;
    uint4 month;
    int year;
    Moment(uint4 m, uint8 d, int y);

    int getDayOfWeek();
};

#endif //CALENDAR_MOMENT_H
