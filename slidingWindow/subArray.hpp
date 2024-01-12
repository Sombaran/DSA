
#include <iostream>
#include <vector>
#include <memory>


class slidingWindow {
    public:
    slidingWindow() = default;
    slidingWindow (const slidingWindow&) =  delete;
    slidingWindow& operator= (const slidingWindow&) = delete;
    slidingWindow& operator= (const slidingWindow&&) = delete;
    ~slidingWindow() = default;
    int max_sum_subarray(std::vector<int>& received, int& k);
    int longest_sum_subarray(std::vector<int>& received, int& k);
};