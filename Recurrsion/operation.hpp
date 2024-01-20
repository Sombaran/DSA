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
    recurrsiveAbastractInterface (const recurrsiveAbastractInterface&) =  delete;
    recurrsiveAbastractInterface& operator= (const recurrsiveAbastractInterface&) = delete;
    recurrsiveAbastractInterface& operator= (const recurrsiveAbastractInterface&&) = delete;
    virtual void printInIncresingOrder(const int&) = 0;
    virtual void printInDecreasongOrder(const int&) = 0;
    //virtual void sayDigit(const int&) = 0;
    virtual ~ recurrsiveAbastractInterface() = default;
};


class playWithRecurrsion: public recurrsiveAbastractInterface {
    public:
    playWithRecurrsion() = default;
    void printInIncresingOrder(const int&);
    void printInDecreasongOrder(const int&);
    ~playWithRecurrsion()= default;
};