using namespace std;
#include "dayType.h";
#include "dayType2.cpp"

int main() {
    // 1. Default constructor
    dayType day1;
    cout << "current day ";
    day1.printDay(); // Should print "Sunday"
    std::cout << std::endl;

    // 2. Previous day
    std::cout << "Previous day: ";
    std::cout << day1.getPreviousDay() << std::endl; // Should print "Saturday"

    // 3. Next day
    std::cout << "Next day: ";
    std::cout << day1.getNextDay() << std::endl; // Should print "Monday"

    // 4. Constructor with parameters
    dayType day2("Monday");
    std::cout << "Day: " << day2.getDay() << std::endl; // Should print "Monday"

    // 6. Add days
    day2.addDays(3);
    std::cout << "New day after adding 3 days: ";
    day2.printDay(); // Should print "Thursday"
    std::cout << std::endl;

    // 7. Add 30 days
    day2.addDays(30);
    std::cout << "New day after adding 30 days: ";
    day2.printDay(); // Should print "Saturday"
    std::cout << std::endl;

    // 8. Add 365 days
    day2.addDays(365);
    std::cout << "New day after adding 365 days: ";
    day2.printDay(); // Should print "Sunday"
    std::cout << std::endl;

    return 0;
}