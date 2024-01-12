/*
@Brief: Find the maximum sum subarray of a fixed size k
https://medium.com/@coffee_addiction/window-sliding-technique-find-the-maximum-sum-subarray-of-a-fixed-size-k-4d153b640562
*/
#include "subArray.hpp"

int slidingWindow::max_sum_subarray(std::vector<int>& received, int& k) {
    std::cout << __func__ << std::endl;
    if (k > received.size() or k < 0 or k == 0) {
        std::cerr << "Window size needs to be checked \n";
    }
    int left, right = 0;
    int currentSum = 0;
    int maxSum = INT_MIN;

    while(right < received.size()) {
        currentSum += received[right];

        if ((right-left+1) == k) {
            maxSum = std::max(maxSum, currentSum);
            currentSum -= received[left];
            left++;
        }
        right++;
    }
    return maxSum;
}

int slidingWindow::longest_sum_subarray(std::vector<int>& received, int& k) {

    return ;
}