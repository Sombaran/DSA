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
  
  int getBit(int& number, int& bit) {
    /*
    number = 13 = 1 1 0 1
    bit  1 * 2^3 = 8
    1 1 1 1
    1 0 0 0
    */
   int mask = (1 << (bit-1));
   std::cout << bit <<" " << mask << std::endl;
   return (number & mask);
  }

  void setBitValue (int& number, int& bit) {
    /*
    number = 16 = 1 1 1 1
    bit  1 * 2^3 = 8
    1 1 0 1
    1 0 0 0
    */
    int returnValue = (number |(1 << (bit-1)));
    std::cout << __func__ << " \t" <<returnValue << std::endl;
  }
  
  void clearBitValue (int& number, int& bit) {
    /*
    number = 16 = 1 1 1 1
    bit  1 * 2^3 = 8
    1 1 0 1
    1 0 0 0
    */
    int returnValue = (number & (not(1 << (bit-1))));
    std::cout << __func__ << " \t" <<returnValue << std::endl;
  }
  
  void toggleBitValue (int& number, int& bit) {
    /*
    number = 16 = 1 1 1 1
    bit  1 * 2^3 = 8
    1 1 0 1
    1 0 0 0
    */
    int returnValue = (number ^ (1 << (bit-1)));
    std::cout << __func__ << " \t" <<returnValue << std::endl;
  }

  bool checkSetBit(int& number, int& bit) {
    /*
    number = 16 = 1 1 1 1
    bit  1 * 2^3 = 8
    1 1 0 1
    1 0 0 0
    */
   bool bitSet {false}; 
   int mask = (1 << (bit-1));
   std::cout << bit <<" " << mask << " " << (number | mask) << std::endl;
   if (number & mask) {
    std::cout << "IF \n";
    bitSet = true;
    return bitSet;
   }
   return false;
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

    int number = 13;
    int bitValue = 4;
    int answer = numPlayObj.getBit(number, bitValue);
    std::cout << answer << std::endl;
    numPlayObj.setBitValue(number, bitValue);
    numPlayObj.clearBitValue(number, bitValue);
    numPlayObj.toggleBitValue(number, bitValue);
    bool checkerBit = numPlayObj.checkSetBit(number, bitValue);
    std::cout << checkerBit << std::endl;
    return 0;
}
