#include "operation.hpp"

std::string bitsManupulation::checkNumberEvenOdd(const int& number) {
    if ((number & 1) == 1) {
        return "Odd";
    }
    else {
        return "Even";
    }
}

/*int bitsManupulation::getUniqueElement(const std::vector<int>& received) {

}*/