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
    //Base case   
    if (tempDestination == tempSouce) {
        return;
    }
    //Processing
    std::cout << "Source " << tempSouce  << " Destination " << tempDestination << std::endl;
    tempSouce++;
    //Tail recurrsion
    walkingTowardsDestination(tempSouce, tempDestination);
}

void playWithRecurrsion::reverseString(std::string& receivedString, const int& start, const int& end) {
    //Base case
    int tempStart{start}, tempEnd{end};
    if (tempStart>tempEnd) {
        return;
    }
    //Processing
    std::swap(receivedString[tempStart++],receivedString[tempEnd--]);
    //Tail Recurssion
    reverseString(receivedString,tempStart,tempEnd);
    std::cout << receivedString << std::endl;
}

bool playWithRecurrsion::stringPalindrome(std::string& receivedString, const int& start, const int& end) {
    //Base case
    int tempStart{start}, tempEnd{end};
    if (tempStart>tempEnd) {
        return true;
    }
    //Processing
    if (receivedString[tempStart] != receivedString[tempEnd]) {
        return false;
    }
    //Tail recurrsion
    return stringPalindrome(receivedString,++tempStart,--tempEnd);
}

int playWithRecurrsion::powerFunction(const int& number, const int& raisedToPower) {
    //Base case
    int tempNumber {number}, tempRaisedToPower{raisedToPower};
    if (tempRaisedToPower == 0) {
        return 1;
    }
    if (tempRaisedToPower == 1) {
        return tempNumber;
    }

    //Head recurrsion
    int answer =  powerFunction(tempNumber,(tempRaisedToPower/2));
    
    //Processing
    if ((tempRaisedToPower&1)==0) {
        return (answer * answer);
    }
    else {
        return (tempNumber * answer * answer);
    }
}