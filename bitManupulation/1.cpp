// 1. Check number is odd or even


#include <iostream>
#include <vector>

int main1() {
    int a = 0;
    std::cout << "Enter number \n";
    std::cin >> a;
    if ((a & 1) == 1) {
        std::cout << "Odd \n";
    }
    else {
        std::cout << " Even \n";
    }
    return (0);
}

// 2. Find unique number in an array a=[1,2,3,3,2,6,1]

int main2() {
    std::vector <int> vecObj;
    vecObj.push_back(1);
    vecObj.push_back(2);
    vecObj.push_back(1);
    vecObj.push_back(3);
    vecObj.push_back(3);
    vecObj.push_back(6);
    vecObj.push_back(2);

    int ret = 0;
    for (int i=0;i<vecObj.size();++i) {
        ret ^= vecObj [i];
    }
    std::cout << "Unique number is " << ret << std::endl;
    return (0);
}

// 3. Given a number find out the (ith) bit of the number 


int main() {
    std::vector <int> vecObj; // 1011011
    vecObj.push_back(1);
    vecObj.push_back(1);
    vecObj.push_back(0);
    vecObj.push_back(1);
    vecObj.push_back(1);
    vecObj.push_back(0);
    vecObj.push_back(1);

    int getIthBit = 0;
    std::cout << " Enter bit to be extracted \n";
    std::cin >> getIthBit;

    for (int i = 0;i<vecObj.size();++i) {
        
    }
}