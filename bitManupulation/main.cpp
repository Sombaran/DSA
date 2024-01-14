#include <iostream>

#include "operation.hpp"

int main(){
    std::shared_ptr<bitsManupulation> bObj = std::make_shared<bitsManupulation> ();
    std::vector<int> vObj {1,2,3,3,2,6,1}; 
    {
        int result1 = bObj->getUniqueElement(vObj);
        std::cout << result1 << std::endl;
    }
    std::shared_ptr<bitsManupulationExtendedNumbers> bExtendedObj; 
    bExtendedObj = std::make_shared<bitsManupulationExtendedNumbers>();
    {
        std::string result1 = bExtendedObj->checkNumberEvenOdd(22);
        std::cout << result1 << std::endl;
        int result2 = bExtendedObj->reverseNumber(2345);
        std::cout << result2 << std::endl;
        int result3 = bExtendedObj->reverseNumber(-2345);
        std::cout << result3 << std::endl;
    }

    return (0);
}