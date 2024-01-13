
#include <iostream>
#include <vector>
#include <memory>
#include <functional>
#include <thread>

class slidingWindow {
    public:
    explicit slidingWindow() = default;
    slidingWindow (const slidingWindow&) =  delete;
    slidingWindow& operator= (const slidingWindow&) = delete;
    slidingWindow& operator= (const slidingWindow&&) = delete;
    ~slidingWindow() = default;
    int max_sum_subarray(std::vector<int>& received, const int& k);
    int longest_sum_subarray(std::vector<int>& received, const int& k);
    int max_sum_subarray(std::vector<int>& received);
};