//#include <bits/stdc++.h>
#include <iostream>


class numberPlay {
  public:
  
  int reverseNumber (int& receivedNumber) {
      int reverse {0};
      while( receivedNumber != 0) {
          reverse = (reverse *10) + (receivedNumber % 10);
          receivedNumber /= 10;
      }
      return reverse;
  }

  int addDigit(int& receivedNumber) {
      int sum {0};
      while(receivedNumber > 0 || sum > 9) {
          if(receivedNumber == 0) {
              receivedNumber = sum;
              sum = 0;
          }
          sum += receivedNumber % 10;
          receivedNumber /= 10;
      }
      return sum;
      /*if (receivedNumber == 0) {
          return (0);
      }
      return ((receivedNumber % 9 == 0) ? 9 : (receivedNumber % 9));*/
  }

  void stringToChar (std::string& receivedString) {
    for (const  auto& i: receivedString) {
        std::cout << i << "\t";
        int value  = i - 'a';
        std::cout << value <<  " ";
    }
    std::cout << std::endl;
    for (int i=0;i<receivedString.length();++i) {
        std::cout << receivedString[i];
    }
    std::cout << std::endl;
  }
  
  int playWithBits(int& number, int& bit) {
    /*
    number = 16 = 1 1 1 1
    bit  1 * 2^3 = 8

    1 1 1 1
    1 0 0 0

    */
    int mask = (1 << (bit-1));
    std::cout << bit <<" " << mask << std::endl;
    std::cout << mask << std::endl; 
    return (number & mask);
  }
};

int main()
{
    int num {2345};
    numberPlay numPlayObj;
    int reverseNumber = numPlayObj.reverseNumber(num);
    std::cout << reverseNumber << std::endl;
    std::cout << num << " " << reverseNumber << std::endl;
    std::cout << numPlayObj.addDigit(reverseNumber) << std::endl;
    
    std::string someString = "hello world";
    numPlayObj.stringToChar(someString);

    int number = 15;
    int bitValue = 4;
    int answer = numPlayObj.playWithBits(number, bitValue);
    std::cout << answer << std::endl;
    return 0;
}
