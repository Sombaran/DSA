#include <iostream>
#include "subArray.hpp"

int main(){
    std::shared_ptr<slidingWindow> fObj = std::make_shared<slidingWindow> ();
    //std::vector <std::shared_ptr<int>> vecOBj = std::make_shared<std::vector<int>> ();
    std::vector<int>vecObj{1, 4, 2, 10, 2, 3, 1, 0, 20};
    int k;
    std::cout << "Enter fixed window size =   ";
    std::cin >> k;
    int result = fObj->max_sum_subarray(vecObj, k);
    std::cout << result << std::endl;
    return (0);
}