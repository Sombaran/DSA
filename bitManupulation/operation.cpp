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
    int reverse {}, temp {number};
    std::cout << number << " " << temp << std::endl;
    while(temp != 0) {
        reverse = ((reverse * 10) + (temp % 10));
        temp /= 10;
    }
    return (reverse);
}

int bitsManupulationExtendedNumbers::addDigits(const int& number){
    int tempNumber {number}, sum {};
    while(tempNumber > 0 || sum > 9) {
          if(tempNumber == 0) {
              tempNumber = sum;
              sum = 0;
          }
          sum += tempNumber % 10;
          tempNumber /= 10;
      }
      return sum;
}

int bitsManupulationExtendedNumbers::countDigitsLog(const int& number) {
    int temp{number};
    int output = int(log2(temp) + 1);
    return output;
}

int bitsManupulationExtendedBits::countDigitsBits(const int& number) {
    int temp{number};
    int counter{};
    while(temp != 0) {
        temp >>= 1;
        counter++;
    }
    return (counter);
}
int bitsManupulationExtendedBits::getBit(const int& number, const int& bit) {
    int tempNum {number}, bitData {bit};
    int mask = (1 << (bitData-1));
    std::cout << bit <<" " << mask << std::endl;
    return (tempNum & mask);
}

void bitsManupulationExtendedBits::setBitValue(const int& number, const int& bit) {
    int tempNum {number}, bitData {bit};
    int mask = (1 << (bitData-1));
    std::cout << bit <<" " << mask << std::endl;
    std::cout << "Set the bit " <<(tempNum | mask) << std::endl;
    return;
}

void bitsManupulationExtendedBits::clearBitValue(const int& number, const int& bit) {
    int returnValue = (number & (not(1 << (bit-1))));
    std::cout << __func__ << " \t" <<returnValue << std::endl;
}

void bitsManupulationExtendedBits::toggleBitValue(const int& number, const int& bit) {

}

bool bitsManupulationExtendedBits::checkSetBit(const int& number, const int& bit) {

}