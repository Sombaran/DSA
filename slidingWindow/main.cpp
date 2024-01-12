#include <iostream>
#include "subArray.hpp"

int main(){
    std::shared_ptr<slidingWindow> fObj = std::make_shared<slidingWindow> ();
    std::vector <int> vecOBj {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int k;
    std::cout << "Enter fixed window size =   ";
    std::cin >> k;
    int result = fObj->max_sum_subarray(vecOBj, k);
    std::cout << result << std::endl;
    return (0);
}