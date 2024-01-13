#include <iostream>
#include "subArray.hpp"

int main(){
    std::shared_ptr<slidingWindow> fObj = std::make_shared<slidingWindow> ();
    std::vector<int>vecObj1{1, 4, 2, 10, 2, 3, 1, 0, 20};
    std::vector<int>vecObj2 {10, 5, 2, 7, 1, 9 };
    int k;
    int varibleWindowSize{};
    std::cout << "Enter fixed window size =   ";
    std::cin >> k;
    int result1 = fObj->max_sum_subarray(vecObj1, k);
    std::cout << result1 << std::endl;
    int result2 = fObj->longest_sum_subarray(vecObj2,varibleWindowSize=15);
    std::cout << result2 << std::endl;
    return (0);
}