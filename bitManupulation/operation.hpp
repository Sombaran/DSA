
#include <iostream>
#include <vector>
#include <memory>
#include <functional>
#include <thread>
#include <exception>
#include <cmath>

class bitsManupulation {
    public:
    explicit bitsManupulation() = default;
    bitsManupulation (const bitsManupulation&) =  delete;
    bitsManupulation& operator= (const bitsManupulation&) = delete;
    bitsManupulation& operator= (const bitsManupulation&&) = delete;
    ~bitsManupulation() = default;
    int getUniqueElement(const std::vector<int>&);
    };

class bitsManupulationExtendedNumbers: public bitsManupulation {
    public:
    std::string checkNumberEvenOdd(const int& );
    int reverseNumber (const int& );
    int addDigits (const int&);
    int countDigitsLog(const int&);
};

class bitsManupulationExtendedBits: public bitsManupulation {
    public:
    int countDigitsBits(const int&);
    int getBit(const int& , const int& );
    void setBitValue (const int& , const int& );
    void clearBitValue (const int& , const int& );
    void toggleBitValue (const int& , const int& );
    bool checkSetBit(const int& , const int& );
};

class bitsManupulationExtendedStrings: public bitsManupulation {
    public:
};