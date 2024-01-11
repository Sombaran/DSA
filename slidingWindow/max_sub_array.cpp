#include <iostream>
#include <vector>

class fixedWindow{
    public:
    fixedWindow() = default;
    fixedWindow (const fixedWindow&) =  delete;
    fixedWindow& operator= (const fixedWindow&) = delete;
    fixedWindow& operator= (const fixedWindow&&) = delete;
    ~fixedWindow() = default;
    int max_sum_subarray(std::vector<int>& received, int& k) {
        std::cout << __func__ << std::endl;
        if (k > received.size() or k < 0) {
            exit(-1);
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
};
int main(){
    fixedWindow fObj;
    std::vector <int> vecOBj {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int k;
    std::cout << "Enter fixed window size =   ";
    std::cin >> k;
    int result = fObj.max_sum_subarray(vecOBj, k);
    std::cout << result << std::endl;
    return (0);
}