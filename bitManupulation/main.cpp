#include <iostream>

#include "operation.hpp"

int main(){
    std::shared_ptr<bitsManupulation> bObj = std::make_shared<bitsManupulation> ();
    std::vector<int> vObj {1,2,3,3,2,6,1}; 
    {
        int result1 = bObj->getUniqueElement(vObj);
        std::cout << result1 << std::endl;
    }
    std::shared_ptr<bitsManupulationExtendedNumbers> bExtendedNumberObj; 
    bExtendedNumberObj = std::make_shared<bitsManupulationExtendedNumbers>();
    {
        std::string result1 = bExtendedNumberObj->checkNumberEvenOdd(22);
        std::cout << "Number is = "<< result1 << std::endl;
        int result2 = bExtendedNumberObj->reverseNumber(2345);
        std::cout << "reverseNumber = "<<result2 << std::endl;
        int result3 = bExtendedNumberObj->reverseNumber(-2345);
        std::cout << "reverseNumber = "<< result3 << std::endl;
        int result4 = bExtendedNumberObj->addDigits(23101);
        std::cout << "Sum of digits = " <<result4 << std::endl;
        int result5 = bExtendedNumberObj->countDigitsLog(6);
        std::cout << "Total number of digits using logirthm = " << result5 << std::endl;
    }
    std::shared_ptr<bitsManupulationExtendedBits> bExtendedBitsObj;
    bExtendedBitsObj = std::make_shared<bitsManupulationExtendedBits> ();
    {
        int result1 = bExtendedBitsObj->countDigitsBits(6);
        std::cout << "Total number of digits using right shift = " << result1 << std::endl;
        int result2 = bExtendedBitsObj->getBit(13,4);
        std::cout << "Get the bit " << result2 << std::endl;
        bExtendedBitsObj->setBitValue(13,4);
        bExtendedBitsObj->clearBitValue(13,4);
    }
    std::shared_ptr<bitsManupulationExtendedStrings> bExtendedStringObj;
    bExtendedStringObj = std::make_shared<bitsManupulationExtendedStrings> ();
    {

    }
    return (0);
}