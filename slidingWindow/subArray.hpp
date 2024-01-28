
#include <iostream>
#include <vector>
#include <memory>
#include <functional>
#include <thread>

class slidingWindow {
    public:
    slidingWindow() = default;
    virtual ~slidingWindow() = default;
    slidingWindow (const slidingWindow&) =  delete;
    slidingWindow& operator= (const slidingWindow&) = delete;
    slidingWindow& operator= (const slidingWindow&&) = delete;
    virtual int longest_sum_subarray(std::vector<int>& , const int& ) = 0;
    //virtual int max_sum_subarray(std::vector<int>& , const int& )=0;
    //virtual int max_sum_subarray(std::vector<int>& )=0;
};

class variableWindow: public slidingWindow {
    public:
    variableWindow() = default;
    ~variableWindow() = default;
    int longest_sum_subarray(std::vector<int>& , const int& ) final;
};

/*class fixedWindowSize: public slidingWindow {
    public:
    fixedWindowSize () = default;
    ~ fixedWindowSize() = default;
    //int max_sum_subarray(std::vector<int>& , const int& ) final;
    //int max_sum_subarray(std::vector<int>& ) final;
};*/
