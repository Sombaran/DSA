#include <iostream>

#include "subArray.hpp"

int main(){
    std::shared_ptr<slidingWindow> fObj = std::make_shared<slidingWindow> ();
    std::vector<int>vecObj1{1, 4, 2, 10, 2, 3, 1, 0, 20};
    std::vector<int>vecObj2 {10, 5, 2, 7, 1, 9 };
    std::vector<int>vecObj3 {-2,1,-3,4,-1,2,1,-5,4};
    std::vector<int>vecObj4 {5,4,-1,7,8};
    int fixedWindow{};
    int varibleWindowSize{};
    std::cout << "Enter fixed window size =   ";
    std::cin >> fixedWindow;
    int result1 = fObj->max_sum_subarray(vecObj1,fixedWindow);
    std::cout << result1 << std::endl;
    int result2 = fObj->longest_sum_subarray(vecObj2,15);
    std::cout << result2 << std::endl;
    int result3 = fObj->max_sum_subarray(vecObj3);
    std::cout << result3 << std::endl;
    int result4 = fObj->max_sum_subarray(vecObj4);
    std::cout << result4 << std::endl;
    return (0);
}