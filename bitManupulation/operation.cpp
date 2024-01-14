#include "operation.hpp"

std::string bitsManupulation::checkNumberEvenOdd(const int& number) {
    if ((number & 1) == 1) {
        return "Odd";
    }
    else {
        return "Even";
    }
}

int bitsManupulation::getUniqueElement(const std::vector<int>& received) {
    int answer{};

    for (const auto& i: received) {
        answer ^= i;
    }
    return (answer);
}