#include <iostream>
#include <vector>
#include <memory>
#include <functional>
#include <thread>
#include <exception>
#include <cmath>

class recurrsiveAbastractInterface{
    public:
    recurrsiveAbastractInterface() = default;
    virtual ~ recurrsiveAbastractInterface() = default;
    recurrsiveAbastractInterface (const recurrsiveAbastractInterface&) =  delete;
    recurrsiveAbastractInterface& operator= (const recurrsiveAbastractInterface&) = delete;
    recurrsiveAbastractInterface& operator= (const recurrsiveAbastractInterface&&) = delete;
    virtual void printInIncresingOrder(const int&) = 0;
    virtual void printInDecreasongOrder(const int&) = 0;
    virtual void sayDigit(const int&, std::vector<std::string>&) = 0;
    virtual void walkingTowardsDestination(const int&, const int&) = 0;
    virtual void reverseString(std::string&, const int&, const int&  ) = 0;
};


class playWithRecurrsion: public recurrsiveAbastractInterface {
    public:
    playWithRecurrsion() = default;
    ~playWithRecurrsion()= default;
    void printInIncresingOrder(const int&) final;
    void printInDecreasongOrder(const int&) final;
    void sayDigit(const int&, std::vector<std::string>&) final;
    void walkingTowardsDestination(const int&, const int&) final;
    void reverseString(std::string&, const int&, const int& ) final;
};