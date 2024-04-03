#include "dayType.h"
#include <iostream>

const std::string dayType::daysOfWeek[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };

dayType::dayType() {
    currentDayIndex = 0; // Default to Sunday
}

dayType::dayType(const std::string& day) {
    for (int i = 0; i < 7; ++i) {
        if (daysOfWeek[i] == day) {
            currentDayIndex = i;
            return;
        }
    }
    // If day is not valid, default to Sunday
    currentDayIndex = 0;
}

void dayType::setDay(const std::string& day) {
    for (int i = 0; i < 7; ++i) {
        if (daysOfWeek[i] == day) {
            currentDayIndex = i;
            return;
        }
    }
    std::cerr << "Invalid day input, setting to default (Sunday)" << std::endl;
    currentDayIndex = 0; // Default to Sunday
}

void dayType::printDay() const {
    std::cout << daysOfWeek[currentDayIndex];
}

std::string dayType::getDay() const {
    return daysOfWeek[currentDayIndex];
}

std::string dayType::getNextDay() const {
    return daysOfWeek[(currentDayIndex + 1) % 7];
}

std::string dayType::getPreviousDay() const {
    return daysOfWeek[(currentDayIndex + 6) % 7];
}

void dayType::addDays(int numDays) {
    currentDayIndex = (currentDayIndex + numDays) % 7;
}