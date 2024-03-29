#include <iostream>

#include "operation.hpp"
using std::cout;
using std::endl;

int main() {
    std::shared_ptr<recurrsiveAbastractInterface> recurrsiveObj;
    recurrsiveObj = std::make_shared<playWithRecurrsion>();
    recurrsiveObj->printInIncresingOrder(10);
    std::cout << std::endl;
    recurrsiveObj->printInDecreasongOrder(10);
    std::cout << std::endl;
    std::vector<std::string> vecObj{
                                        "zero", "one", "two", "three",
                                        "four", "five", "six",
                                        "seven", "eight", "nine"
                                    };
    recurrsiveObj->sayDigit(2345, vecObj);
    cout<<endl;
    recurrsiveObj->walkingTowardsDestination(1,10);
    cout<<endl;
    std::string passingValue="BookkooBzyx";
    recurrsiveObj->reverseString(passingValue,0,passingValue.length()-1);
    cout<<endl;
    std::atomic<bool> isPalindrome{}; 
    isPalindrome = recurrsiveObj->stringPalindrome(passingValue,0,passingValue.length()-1);
    if (isPalindrome) {
        cout << "Palindrome string \n";
    } else {
        cout << "Not a palindrome string \n";
    }
    double returnPowerFunctionOutput = recurrsiveObj->powerFunction(2,10);
    cout <<  "Power output is " << returnPowerFunctionOutput << endl;
    return (0);
}