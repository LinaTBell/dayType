#ifndef DAYTYPE_H
#define DAYTYPE_H

#include <string>

class dayType {
private:
    static const std::string daysOfWeek[7];
    int currentDayIndex;

public:
    dayType();
    dayType(const std::string& day);

    void setDay(const std::string& day);
    void printDay() const;
    std::string getDay() const;
    std::string getNextDay() const;
    std::string getPreviousDay() const;
    void addDays(int numDays);
};

#endif // DAYTYPE_H