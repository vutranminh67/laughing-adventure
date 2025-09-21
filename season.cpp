#include <iostream>
#include <string>

std::string getSeason(int month) {
    if (month >= 3 && month <= 5) return "Spring";
    if (month >= 6 && month <= 8) return "Summer";
    if (month >= 9 && month <= 11) return "Autumn";
    if (month == 12 || month == 1 || month == 2) return "Winter";
    return "Invalid month";
}

int main() {
    int month;
    std::cout << "Enter the month number (1-12): ";
    std::cin >> month;

    std::string season = getSeason(month);
    std::cout << "The season is: " << season << std::endl;

    return 0;
}