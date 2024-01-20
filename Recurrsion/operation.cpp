#include "operation.hpp"


void playWithRecurrsion::printInIncresingOrder(const int& number) {
    int tempNumber {number};
    // base case 
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
    // base case 
    if (0 == tempNumber) {
        return;
    }
    //Head recurrsion
    printInDecreasongOrder(tempNumber-1);
    //processing
    std::cout << tempNumber << std::endl;

    
    return;
}