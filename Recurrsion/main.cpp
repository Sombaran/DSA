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
    return (0);
}