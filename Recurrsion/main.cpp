#include <iostream>

#include "operation.hpp"


int main() {
    std::shared_ptr<recurrsiveAbastractInterface> recurrsiveObj;
    recurrsiveObj = std::make_shared<playWithRecurrsion>();
    recurrsiveObj->printInIncresingOrder(10);
    std::cout << std::endl;
    recurrsiveObj->printInDecreasongOrder(10);
    return (0);
}