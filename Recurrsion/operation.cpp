#include "operation.hpp"


void playWithRecurrsion::printInIncresingOrder(const int& number) {
    int tempNumber {number};
    //Base case 
    if (0 == tempNumber) {
        return;
    }
    //Processing
    std::cout << tempNumber << std::endl;
    //Tail recurrsion
    printInIncresingOrder(tempNumber-1);
    return;
}

void playWithRecurrsion::printInDecreasongOrder(const int& number) {
    int tempNumber {number};
    //Base case 
    if (0 == tempNumber) {
        return;
    }
    //Head recurrsion
    printInDecreasongOrder(tempNumber-1);
    //processing
    std::cout << tempNumber << std::endl;
    return;
}

void playWithRecurrsion::sayDigit(const int& number, std::vector<std::string>& receivedArray) {

    int tempNumber {number}, digit{};
    //Base case
    if (0 == tempNumber) {
        return;
    }
    //Processing 
    digit = ((digit*10) + (tempNumber%10));
    tempNumber /= 10;
    //Tail recurrsion
    sayDigit(tempNumber, receivedArray);
    std::cout << receivedArray[digit] << " ";
}

void playWithRecurrsion::walkingTowardsDestination(const int& source, const int& destination) {
    int tempSouce{source}, tempDestination{destination};
    std::cout << "Source " << tempSouce  << " Destination " << tempDestination << std::endl;
    if (tempDestination == tempSouce) {
        return;
    }

    tempSouce++;
    walkingTowardsDestination(tempSouce, tempDestination);
}