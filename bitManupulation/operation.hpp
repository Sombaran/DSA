
#include <iostream>
#include <vector>
#include <memory>
#include <functional>
#include <thread>

class bitsManupulation {
    public:
    explicit bitsManupulation() = default;
    bitsManupulation (const bitsManupulation&) =  delete;
    bitsManupulation& operator= (const bitsManupulation&) = delete;
    bitsManupulation& operator= (const bitsManupulation&&) = delete;
    ~bitsManupulation() = default;
    std::string checkNumberEvenOdd(const int& );
    int getUniqueElement(const std::vector<int>& );
    };