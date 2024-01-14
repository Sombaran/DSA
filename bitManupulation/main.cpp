#include <iostream>

#include "operation.hpp"

int main(){
    std::shared_ptr<bitsManupulation> bObj = std::make_shared<bitsManupulation> ();
    std::string result1 = bObj->checkNumberEvenOdd(22);
    std::cout << result1 << std::endl;
    return (0);
}