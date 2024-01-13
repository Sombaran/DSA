/*
@Brief: Find the maximum sum subarray of a fixed size k
https://medium.com/@coffee_addiction/window-sliding-technique-find-the-maximum-sum-subarray-of-a-fixed-size-k-4d153b640562
*/
#include "subArray.hpp"

int slidingWindow::max_sum_subarray(std::vector<int>& received, const int& windowSize=0) {
    if (windowSize > received.size() or windowSize < 0 or windowSize == 0) {
        std::cerr << "Window size needs to be checked \n";
    }
    int left, right {}, currentSum {};
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
    std::cout << __func__ << " ";
    return maxSum;
}

/*
https://meenumatharu.medium.com/exploring-the-sliding-window-algorithm-in-javascript-part-2-variable-size-window-e12930c73783
*/
int slidingWindow::longest_sum_subarray(std::vector<int>& A,const int& windowSize=0) {
    int left{},right{},sum {} ;
	int maxLen = INT_MIN;

    while (right < A.size()) {
		sum += A[right];
		if (sum == windowSize) { 
		    maxLen = std::max(maxLen, right-left+1);
			right++;
		}
		else if (sum < windowSize) {
			right++;
		}
		else if (sum > windowSize) {
			while (sum > windowSize) {
				sum -= A[left];
				left++;
                }
            if(sum == windowSize){
			    maxLen = std::max(maxLen, right-left+1);
			}
        right++;
        }
	}
    std::cout << __func__<< " ";
	return maxLen;
}

/*
https://leetcode.com/problems/maximum-subarray/submissions/1144843485/
*/

int slidingWindow::max_sum_subarray(std::vector<int>& received) {
    int left, right {}, currentSum {};
    int maxSum = INT_MIN;

    while (right < received.size()) {
        currentSum += received[right];
        maxSum = std::max(currentSum, maxSum);
        right++;

        if (currentSum < 0) {
            currentSum = 0;
            left = right;
        }
    }
    std::cout << __func__<< " ";
    return (maxSum);
}