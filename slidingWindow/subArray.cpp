/*
@Brief: Find the maximum sum subarray of a fixed size k
https://medium.com/@coffee_addiction/window-sliding-technique-find-the-maximum-sum-subarray-of-a-fixed-size-k-4d153b640562
*/
#include "subArray.hpp"

int slidingWindow::max_sum_subarray(std::vector<int>& received, int& windowSize) {
    std::cout << __func__ << std::endl;
    if (windowSize > received.size() or windowSize < 0 or windowSize == 0) {
        std::cerr << "Window size needs to be checked \n";
    }
    int left, right {};
    int currentSum {};
    int maxSum = INT_MIN;

    while(right < received.size()) {
        currentSum += received[right];

        if ((right-left+1) == windowSize) {
            maxSum = std::max(maxSum, currentSum);
            currentSum -= received[left];
            left++;
        }
        right++;
    }
    return maxSum;
}

int slidingWindow::longest_sum_subarray(std::vector<int>& A, int& K) {
    int left{},right{},sum {} ;
	int maxLen = INT_MIN;
    std::cout << __func__ << std::endl;

    while (right < A.size()) {
		sum += A[right];
		if (sum == K) { 
		    maxLen = std::max(maxLen, right-left+1);
			right++;
		}
		else if (sum < K) {
			right++;
		}
		else if (sum > K) {
			while (sum > K) {
				sum -= A[left];
				left++;
                }
            if(sum == K){
			    maxLen = std::max(maxLen, right-left+1);
			}
        right++;
        }
	}
	return maxLen;
}