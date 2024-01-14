#include "operation.hpp"

int bitsManupulation::getUniqueElement(const std::vector<int>& received) {
    int answer{};

    for (const auto& i: received) {
        answer ^= i;
    }
    return (answer);
}

std::string bitsManupulationExtendedNumbers::checkNumberEvenOdd(const int& number) {
    if ((number & 1) == 1) {
        return "Odd";
    }
    else {
        return "Even";
    }
}

int bitsManupulationExtendedNumbers::reverseNumber(const int& number) {
    std::cout << __LINE__ << std::endl;
    int reverse {}, temp {number};
    std::cout << number << " " << temp << std::endl;
    while(temp != 0) {
        reverse = ((reverse * 10) + (temp % 10));
        temp /= 10;
    }
    return (reverse);
}