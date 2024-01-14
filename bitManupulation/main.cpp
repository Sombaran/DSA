#include <iostream>

#include "operation.hpp"

int main(){
    std::shared_ptr<bitsManupulation> bObj = std::make_shared<bitsManupulation> ();
    std::string result1 = bObj->checkNumberEvenOdd(22);
    std::cout << result1 << std::endl;
    std::vector<int> vObj {1,2,3,3,2,6,1};
    int result2 = bObj->getUniqueElement(vObj);
    std::cout << result2 << std::endl;
    return (0);
}