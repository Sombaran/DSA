// Warm up 1

5
/* 
Q1. Given an array of N integers. Your task is to print the sum of all of the integers. 
Example 1: 
Input: 
4 
1 2 3 4 
Output: 
10 
Example 2: 
Input: 
6 
5 8 3 10 22 45 
Output: 
93 
 
*/ 
 
#include <iostream> 
#include <vector> 
 
 
void printOutput (std::vector <int> &); 
int  performOperation (std::vector<int> &, int&); 
 
void printOutput (std::vector <int> &received) { 
    for (const auto& i: received) { 
        std::cout <<  i  << " "; 
    } 
    std::cout << std::endl; 
} 
 
int performOperation (std::vector<int>& received, int& vectorSize ) { 
 printOutput(received); 
 int result {0}; 
 int i {0}; 
 while(i<vectorSize) { 
  std::cout << received[i] << "\t"; 
  result += received[i]; 
  ++i; 
 } 
 std::cout << std::endl; 
 return result; 
} 
 
 
int main() { 
 
    std::vector <int> vec1{}; 
    std::vector <int> vec2{5,8,3,10,22,45}; 
     
    //int n{0}; // size of vector 
    //std::cout << "Enter size of vector \n"; 
    //std::cin >> n; 
     
    //pushIntoVector(n); 
    vec1.push_back(1); 
    vec1.push_back(2); 
    vec1.push_back(3); 
    vec1.push_back(4); 
     
    printOutput(vec1); 
    int sizeofVector1=vec1.size(); 
    std::cout << sizeofVector1 << std::endl; 
    std::cout << "====================================================================
==\n"; 
    std::cout << performOperation (vec1,sizeofVector1) << std::endl; 
 
    printOutput(vec2); 
    int sizeofVector2=vec2.size(); 
    std::cout << sizeofVector2 << std::endl; 
    std::cout << "====================================================================
==\n"; 
    std::cout << performOperation (vec2,sizeofVector2) << std::endl; 
     
 
    return (0); 
} 
 
/* 
Q2. Given an array A[] of N integers and an index Key. Your task is to print the element present at 
index key in the array. 
Example 1: 
Input: 
5 2 
10 20 30 40 50 
Output: 
30 
Example 2: 
Input: 
7 4 
10 20 30 40 50 60 70 
Output: 
50 
*/ 
 
 
 
#include <iostream> 
#include <vector> 
 
void printOutput (std::vector <int> &); 
int  performOperation (std::vector<int> &, int&, int&); 
 
void printOutput (std::vector <int> &received) { 
 for (const auto& i: received) { 
  std::cout <<  i  << " "; 
 } 
 std::cout << std::endl; 
} 
 
int performOperation (std::vector<int>& received, int& vectorSize, int& key) { 
 printOutput(received); 
 int result {0}; 
 int i {0}; 
 std::cout << "Size vector " << vectorSize << std::endl; 
 std::cout << "Key " << key << std::endl; 
 //std::cout << received[key] << std::endl; 
 if (key > vectorSize || key < 0 ) { 
  //std::string returnType {"Error key cannot be greater than array size "}; 
  exit (-1); 
 } 
 
 while(i<vectorSize && i<= key) { 
  if (received[key] == received[i]) { 
   std::cout << "Key found " << received[key] << " " << received[i] << "\t"; 
   result = received[key]; 
  } 
  ++i; 
 } 
 std::cout << std::endl; 
 return result; 
} 
 
 
 
int main() { 
 std::vector <int> vec1{}; 
 std::vector <int> vec2{10,20,30,40,50,60,70}; 
 
     //pushIntoVector(n); 
     vec1.push_back(10); 
     vec1.push_back(20); 
     vec1.push_back(30); 
     vec1.push_back(40); 
 vec1.push_back(50); 
 
     printOutput(vec1); 
     int sizeofVector1=vec1.size(); 
 int key1{2}; 
     std::cout << sizeofVector1 << std::endl; 
 std::cout << "=====================================================================
=\n"; 
     std::cout << "output 1: " << performOperation (vec1,sizeofVector1, key1) << std::endl; 
 
     printOutput(vec2); 
     int sizeofVector2=vec2.size(); 
 int key2 {4}; 
     std::cout << sizeofVector2 << std::endl; 
     std::cout << "===================================================================
===\n"; 
     std::cout << "output 2: " << performOperation (vec2,sizeofVector2,key2) << std::endl; 
 
 //check key at 0 
 int key3{0}; 
     std::cout << "===================================================================
===\n"; 
 std::cout << "output 3: " << performOperation (vec2,sizeofVector2,key3) << std::endl; 
 
     //check key at -ve index 
 int key4{-1}; 
     std::cout << "===================================================================
===\n"; 
 std::cout << "output 4: " << performOperation (vec2,sizeofVector2,key4) << std::endl; 
 
 //check key out of bound 
 int key5{100}; 
     std::cout << "===================================================================
===\n"; 
 std::cout << "output 5: " << performOperation (vec2,sizeofVector2,key4) << std::endl; 
 
 //check key and vector size same 
 int key6{7}; 
     std::cout << "===================================================================
===\n"; 
 std::cout << "output 6: " << performOperation (vec2,sizeofVector2,key4) << std::endl; 
     return (0); 
} 
 
/* 
Q3. Given an sorted array A of size N. Find number of elements which are less than or equal to given 
element X. 
Example 1: 
Input: 
N = 6 
A[] = {1, 2, 4, 5, 8, 10} 
X = 9 
Output: 
5 
Example 2: 
Input: 
N = 7 
A[] = {1, 2, 2, 2, 5, 7, 9} 
X = 2 
Output: 
4 
*/ 
 
 
#include <iostream> 
#include <vector> 
 
void printOutput (std::vector <int> &); 
int  performOperation (std::vector<int> &, int&, int&); 
 
void printOutput (std::vector <int> &received) { 
 for (const auto& i: received) { 
  std::cout <<  i  << " "; 
 } 
 std::cout << std::endl; 
} 
 
int performOperation (std::vector<int> &received, int& vectorSize, int& key) { 
 int i {0},count{0}, result {0}; 
     std::cout << "Size vector " << vectorSize << std::endl; 
 std::cout << "Key " << key << std::endl; 
     while(i<vectorSize) {    
         if(received[i] <= key) { 
             result = ++count; 
  } 
  if (received[i] == received[i+1] << key) { 
             result = ++count; 
         } 
  ++i; 
 } 
 return result; 
} 
 
int main() { 
 std::vector <int> vec1{}; 
 std::vector <int> vec2{1,2,2,2,5,7,9}; 
 
     //pushIntoVector(n); 
     vec1.push_back(1); 
     vec1.push_back(2); 
     vec1.push_back(4); 
     vec1.push_back(5); 
 vec1.push_back(8); 
     vec1.push_back(10); 
 
 
     printOutput(vec1); 
     int sizeofVector1=vec1.size(); 
 int key1{9}; 
     std::cout << sizeofVector1 << std::endl; 
     std::cout << "===================================================================
===\n"; 
     std::cout << "output 1: " << performOperation (vec1,sizeofVector1, key1) << std::endl; 
 
     printOutput(vec2); 
     int sizeofVector2=vec2.size(); 
 int key2{2}; 
     std::cout << sizeofVector2 << std::endl; 
     std::cout << "===================================================================
===\n"; 
     std::cout << "output 1: " << performOperation (vec1,sizeofVector2, key2) << std::endl; 
     return (0); 
} 
 
/* 
Q4. You are given an array A of size N. You need to print elements of A in alternate order (starting 
from index 0). 
Example 1: 
Input: 
N = 4 
A[] = {1, 2, 3, 4} 
Output: 
1 3 
Example 2: 
Input: 
N = 5 
A[] = {1, 2, 3, 4, 5} 
Output: 
1 3 5 
*/ 
 
#include <iostream> 
#include <vector> 
 
void printOutput (std::vector <int> &); 
void  performOperation (std::vector<int> &, int&); 
 
void printOutput (std::vector <int> &received) { 
    for (const auto& i: received) { 
        std::cout <<  i  << " "; 
    } 
    std::cout << std::endl; 
} 
 
void  performOperation (std::vector<int> & received, int& vectorSize){ 
      int i {1}; 
      std::vector <int> outputVector{}; 
     std::cout << "Size vector " << vectorSize << std::endl; 
        while (i<=vectorSize) { 
            if (i % 2 != 0) { 
                //std::cout << "Odd detected " << i << std::endl; 
                //received[i]; 
                outputVector.push_back(i); 
            } 
            ++i; 
        } 
        printOutput(outputVector); 
        return; 
} 
 
int main () { 
     std::vector <int> vec1{}; 
     std::vector <int> vec2{1,2,3,4,5}; 
 
     //pushIntoVector(n); 
     vec1.push_back(1); 
     vec1.push_back(2); 
     vec1.push_back(3); 
     vec1.push_back(4); 
 
     printOutput(vec1); 
     int sizeofVector1=vec1.size(); 
     std::cout << sizeofVector1 << std::endl; 
     std::cout << "===================================================================
===\n"; 
     std::cout << "output 1: \n";  
      performOperation (vec1,sizeofVector1); 
 
     printOutput(vec2); 
     int sizeofVector2=vec2.size(); 
     std::cout << sizeofVector2 << std::endl; 
     std::cout << "===================================================================
===\n"; 
     std::cout << "output 1: \n";  
      performOperation (vec1,sizeofVector2); 
     return (0); 
} 
 
/* 
Q5. Given an array Arr of N positive integers. Your task is to find the elements whose value is equal 
to that of its index value ( Consider 1-based indexing ). 
Example 1: 
Input: 
N = 5 
Arr[] = {15, 2, 45, 12, 7} 
Output: 2 
Explanation: Only Arr[2] = 2 exists here 
 
Example 2: 
Input: 
N = 1 
Arr[] = {1} 
Output: 1 
Explanation: Here Arr[1] = 1 exists 
*/ 
 
 
#include <iostream> 
#include <vector> 
 
void printOutput (std::vector <int> &); 
int performOperation(std::vector <int>&, int&); 
 
void printOutput (std::vector <int> &received) { 
    for (const auto& i: received) { 
        std::cout <<  i  << " "; 
    } 
    std::cout << std::endl; 
} 
int performOperation(std::vector <int>& received, int& sizeVector) { 
    int i{}, output {};     
    for (i=1;i<=sizeVector;++i) { 
        std::cout << received [i-1] << " " << i << " \n "; 
        if (received [i-1] == i ) { 
            output = i; 
            break; 
        } 
    } 
    std::cout <<std::endl; 
    return (output); 
} 
 
int main() { 
    std::vector <int> vec1 {15, 2, 45, 12, 7}; 
    std::vector <int> vec2 {1}; 
 
    int size1= vec1.size(); 
    std::cout << "Output 1 : " << performOperation (vec1, size1) << std::endl; 
 
    int size2 = vec2.size(); 
    std::cout << "Output 2 : " << performOperation (vec2, size2) << std::endl; 
     
    /* 
    for (int i=1;i<=vec2.size();++i) { 
        std::cout << vec2 [i-1] << " " << i << "\t\t\t"; 
    } 
    std::cout <<std::endl;*/ 
    return (0); 
} 
 
/* 
Q6. Given an array of size N and you have to tell whether the array is perfect or not. An array is said 
to be perfect if it’s reverse array matches the original array. If the array is perfect then print 
"PERFECT" else print "NOT PERFECT". 
Example 1: 
Input : Arr[] = {1, 2, 3, 2, 1} 
Output : PERFECT 
Explanation: 
Here we can see we have [1, 2, 3, 2, 1] 
if we reverse it we can find [1, 2, 3, 2, 1] 
which is the same as before. 
So, the answer is PERFECT. 
Example 2: 
Input : Arr[] = {1, 2, 3, 4, 5} 
Output : NOT PERFECT 
*/ 
 
#include <iostream> 
#include <vector> 
 
void printOutput (std::vector <int> &); 
void  performOperation (std::vector<int> &, int&); 
 
void printOutput (std::vector <int> &received) { 
    for (const auto& i: received) { 
        std::cout <<  i  << " "; 
    } 
    std::cout << std::endl; 
} 
 
 
void  performOperation (std::vector<int> & received, int& vectorSize) { 
    int i{0}, j{vectorSize-1}; 
    std::cout << "front " << received[i] << std::endl; 
    std::cout << "back " << received[j] << std::endl; 
    while (i<j) { 
        //while (j>=i) { 
            if (received[i++] == received [j--]) { 
                std::cout << "Perfect \n"; 
            } 
            else { 
                std::cout << "Note perfect \n"; 
            } 
            //--j; 
        //} 
        //++i; 
    } 
} 
int main () { 
     std::vector <int> vec1{}; 
     std::vector <int> vec2{1,2,3,4,5}; 
 
     //pushIntoVector(n); 
     vec1.push_back(1); 
     vec1.push_back(2); 
     vec1.push_back(3); 
     vec1.push_back(2); 
        vec1.push_back(1); 
 
     printOutput(vec1); 
     int sizeofVector1=vec1.size(); 
     std::cout << sizeofVector1 << std::endl; 
     std::cout << "===================================================================
===\n"; 
     std::cout << "output 1: \n"; 
      performOperation (vec1,sizeofVector1); 
 
      printOutput(vec2); 
     int sizeofVector2=vec2.size(); 
     std::cout << sizeofVector2 << std::endl; 
     std::cout << "===================================================================
===\n"; 
     std::cout << "output 2: \n"; 
      performOperation (vec2,sizeofVector2); 
      return (0); 
} 
 
/* 
Q7. Given an array of length N, at each step it is reduced by 1 element. In the first step the maximum 
element would be removed, while in the second step minimum element of the remaining array would 
be removed, in the third step again the maximum and so on. Continue this till the array contains only 1 
element. And find the final element remaining in the array. 
Example 1: 
Input: 
N = 7 
A[] = {7, 8, 3, 4, 2, 9, 5} 
Ouput: 
5 
Explanation: 
In first step ’9’ would be removed, in 2nd step 
’2’ will be removed, in third step ’8’ will be 
removed and so on. So the last remaining 
element would be ’5’. 
Example 2: 
Input: 
N = 8 
A[] = {8, 1, 2, 9, 4, 3, 7, 5} 
Ouput: 
4 
*/ 
 
#include <iostream> 
#include <vector> 
#include <algorithm> 
 
 
void printOutput (std::vector <int> &); 
int   performOperation (std::vector<int> &, int&); 
 
void printOutput (std::vector <int> &received) { 
    for (const auto& i: received) { 
        std::cout <<  i  << " "; 
    } 
    std::cout << std::endl; 
} 
 
int performOperation (std::vector<int> &received, int& vectorSize) { 
    std::sort(received.begin(), received.end()); 
    //int startPos = received.begin(); 
    //int endPos = received.end(); 
    printOutput(received); 
    //int i{0}, j{vectorSize-1}; 
    //for (int i=vectorSize-1;i>0;--i) { 
        //std::cout << received[i] << " \t" << std::endl; 
        //if (received[]) 
        //std::cout << std::endl; 
        //received[i+1] = received[i]; 
         
        //if (received[i] > received[i-1]) { 
        //    received[i+1] = received [i]; 
        //} 
    //} 
    //for(const auto& i : received) { 
    //    received.push 
    //} 
    int i{0}; 
    while(i <= vectorSize-2 ) { 
        std::cout << "Enterd into if ===========================\n"; 
        received.pop_back(); 
        std::reverse(received.begin(), received.end()); 
        std::cout << "Pop & Rev done =========================== " << vectorSize << std::endl; 
        printOutput(received); 
        ++i; 
    } 
     
    printOutput(received); 

    // Warm up 2
/*
4. https://leetcode.com/problems/running-sum-of-1d-array/
*/

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int temp{0}, sizeV = nums.size();
        std::vector <int> output{};
        for (int i = 0; i<sizeV; ++i){
        //temp = v1[i]+v1[i+1];
        temp +=nums[i];
        output.push_back(temp);
        //std::cout << v1[i] << " " << temp << " ";
        }
        return {output};
    }
};

/*
7. https://leetcode.com/problems/three-consecutive-odds/
*/

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        bool flag {false};
        size_t counter {0};
        for (int i=0;i<arr.size();++i) {
            if (arr[i] % 2 == 1) {
                std::cout << " Consuctive odd found " << arr [i] << " ";
                ++counter;
            }
            
            else if (arr[i]%2 == 0){
                counter=0;
            }

            if (counter == 3) {
                flag = true;
            }
        }
        return flag;
    }
};

/*
8. https://leetcode.com/problems/move-zeroes
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        std::vector<int> output{};
        int i{};
        int size=nums.size();
        std::cout << size << std::endl;
        int counter{0};
        for (i=0;i<size;++i) {
            if (nums[i] == 0) {
                ++counter;
                //std::cout << counter <<" \t\t" << i ;
                //break;
                nums.erase(nums.begin() + i);
                --i;
                --size;
            }
        }
        for (int i = 0; i < counter;++i) {
            nums.push_back(0);
    }
        std::cout << std::endl;
        return;
    }
};

/*
1. Reverse the Number like 153 => 351 . Numbers can be negative
*/

#include <iostream>
#include <vector>

int isNumberNegavtive (int& , bool&);
int isNumberNegavtive (int& number, bool& flag) {
    if (flag) {
        return (number*(-1));
        }
        else {
            return (number);
        }
}

int main(){
    std::vector<int> result{};
    int n{}, mod{};
    bool isNumberNegative {false};
    std::cout << "Enter number: \t";
    std::cin >> n;
    if (n < 0) {
        isNumberNegative = true;
        n *= -1;
        std::cout << n << "\n";
    }
    while(n!=0){
        mod=mod*10+n%10;
        //std::cout << mod << " \t\t ";
        n/=10;
    }
    std::cout << mod << std::endl;
    std::cout << isNumberNegavtive(mod, isNumberNegative) << std::endl;
    return (0);
}


/*
3. https://leetcode.com/problems/richest-customer-wealth
*/

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        std::vector<int> vec{};
        int size=vec.size();
        int sum{}, output{};
        for (auto i = 0; i < accounts.size(); ++i)
        {
            sum = std::accumulate(std::begin(accounts[i]), std::end(accounts[i]), 0);
            std::cout<< sum << std::endl;
            vec.push_back(sum);
        }
        std::sort(vec.begin(),vec.end());

        for(int j=size;j>0;--j)
            std::cout << vec[j] << " ";
        std::cout<< std::endl;
        output = vec.back();
        return (output);
    }
};

/*
5. https://leetcode.com/problems/jewels-and-stones
*/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        size_t count{0};
        std::cout <<jewels.length() << " "  << stones.length() << std::endl;

        std::map<char, int> m{};

        for (int i=0;i<stones.length();++i) {
           m[stones[i]]++;
        }
        for(int i=0; i<jewels.length();++i) {
           count += m[jewels[i]];
        }
                 
        return (count);
    }
};

/*
6. https://leetcode.com/problems/minimum-absolute-difference
*/

class Solution 
{
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end());
        
        int m = INT_MAX;
        for(int i=1;i<arr.size();i++)
            m = min(m,arr[i]-arr[i-1]);

        vector<vector<int>> ans;
        for(int i=1;i<arr.size();i++)
            if(arr[i]-arr[i-1] == m)
                ans.push_back({arr[i-1],arr[i]});
        
        return ans;
    }
};

// Warm up 3

/*
https://leetcode.com/problems/power-of-two/
*/

class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool flag {false};
        for (int i=0;i<100;++i){
            if (pow(2,i) == n) {
                flag = true;
            }
        }
        return flag;
    }
};

/*
https://leetcode.com/problems/valid-anagram/
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        bool flag{false};
        int i{},j{};
        std::unordered_map<char, int> m1{},m2{};
        
        std::unordered_map<char, int>::iterator it1 = m1.begin();
        std::unordered_map<char, int>::iterator it2 = m2.begin();

        for (i=0;i<s.length();++i) {
            m1[s[i]]++;
        }

        for (j=0;j<t.length();++j) {
            m2[t[j]]++;
        }
        /*if ( m1[s[i]]++ ==  m2[t[j]]++) {
            flag = true;
        } else {
            flag = false;
        }*/

        if (m1 == m2 /*it1->first == it2-> first && it1->second == it2->second*/) {
            flag = true;
            std::cout << "match key \n";
        } else {
            flag = false;
            std::cout << "no match key \n";
        }
        return (flag);    
    }
};

/*
https://leetcode.com/problems/move-zeroes/
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        std::vector<int> output{};
        int i{};
        int size=nums.size();
        std::cout << size << std::endl;
        int counter{0};
        for (i=0;i<size;++i) {
            if (nums[i] == 0) {
                ++counter;
                //break;
                nums.erase(nums.begin() + i);
                --i;
                --size;
            }
        }
        for (int i = 0; i < counter;++i) {
            nums.push_back(0);
    }
        std::cout << std::endl;
        return;
    }
};

/*
https://leetcode.com/problems/ugly-number/
*/

class Solution {
public:
    bool isUgly(int n) {
        bool flag{false};
        if (n<=0)
            return (flag);
        while (n>1) 
        {
            if (n%2 ==0) {
                n/=2;
            }
            else if (n%3 ==0) {
                n/=3;
            }
            else if (n%5 ==0) {
                n/=5;
            }
            else
                return (flag);
        } 

        return (not(flag));
    }
};

/*
https://leetcode.com/problems/third-maximum-number/
*/

class Solution {
public:
    char findTheDifference(string s, string t) {
        char c = 0;
        for(char cs : s) 
            c ^= cs;
        for(char ct : t) 
            c ^= ct;
        std::cout << c << std::endl;
        return c;
    }
};

/*
https://leetcode.com/problems/add-digits/
*/

class Solution {
public:
    int addDigits(int num) {
        if (num == 0)
            return 0;
        else if (num ==1)
            return 1;
        else 
            return 1+(num-1) % 9;        
    }
};

/*
https://leetcode.com/problems/sum-of-digits-of-string-after-convert/
*/

class Solution {
public:
    int getLucky(string s, int k) {
       int c=0;
       for(const auto& i:s){
           int x=i-96;
            if(x<10){
                c=c+x;
            }else{
                c=c+(x%10);
                x/=10;
                c=c+x;
            }
        }

        if(k==1){
            return c;
        }else{
            for(int j=0;j<k-1;j++){
                int y=0;
                while(c){
                    y=y+(c%10);
                    c/=10;
                }
                c=y;
            }
            return c;
        }
        return -1;
        
    }
};

/*
https://leetcode.com/problems/third-maximum-number/
*/
class Solution {
public:
    int thirdMax(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        reverse(nums.begin(), nums.end());
        if(nums.size()<3) 
            return nums[0];
        return nums[2];
    }
};

/*
https://leetcode.com/problems/reverse-vowels-of-a-string/solutions/
*/

class Solution {
public:
    string reverseVowels(string s) {
        if(s.size() == 1)
            return s;
        int i = 0;
        int j = s.size()-1;
        while(i < j) {
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || 
               s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || 
               s[i] == 'O' || s[i] == 'U') {

                if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u' || s[j] == 'A' || s[j] == 'E' || s[j] == 'I' || s[j] == 'O' || s[j] == 'U') 
                {
                       swap(s[i],s[j]);
                       j--;
                       i++;
                } 
                else 
                {
                    j--;
                }
            } 
            else 
            {
                i++;
            }
        }
        return s;
    }
};
// November warm up 1
// 1. Minimum of three numbers

#include <iostream>
#include <algorithm>


int main1() {
    int n1=0, n2=0, n3=0;

    std::cout << "Enter numbers \n";
    std::cin >> n1 >> n2 >> n3;
    std::cout << std::min(n1,std::min(n2,n3));
    return (0);
}


// 2. check couple is eligible for marriage (girl age should be 18 boy should be 21) print yes or no

int main2(){
    int ageBoy=0, ageGirl=0;
    //std::string returnType;
    std::cout << "Enter age for boy and girl \n ";
    std::cin >> ageBoy >> ageGirl;
    if (ageBoy >=21 && ageGirl >= 18)
        std::cout << "Boy & girl eligible for marriage";
    else
        std::cout << "Boy & girl not eligible for marriage";
    return(0);
}

// 3. print tax amount if bill amount is 50000 above then tax is 10% else 5% , using ternary operator

int main3(){
    int billAmount=0;
    float taxAmount_greater_50000=0.0f, taxAmount_lesser_50000=0.0f;
    std::cout << "Enter bill amount \n";
    std::cin >> billAmount;
    taxAmount_greater_50000 = ((billAmount/100) *(10));
    taxAmount_lesser_50000 = ((billAmount/100) *(5));
    return ((billAmount > 50000) ? taxAmount_greater_50000 : taxAmount_lesser_50000);
}

// 4. check year is leap or not

int main4(){
    int getYear=0;
    std::cout << "Enter year \n";
    std::cin >> getYear;
    if (getYear / 4 == 0) {
        std::cout << "Leap year \n";
    }
    else {
        std::cout << "Not a leap year \n";
    }
    return (0);
}

// 5. check number is odd or not, print odd or even

int main(){
    int checkNumber=0;
    std::cout << "Enter number \n";
    std::cin >> checkNumber;

    if (checkNumber & 1 == 0){
        std::cout << "Even \n";
    }
    else {
        std::cout << "Odd \n";
    }
    return (0);
}

// November warmup 2
// 1. Find max of 3 elements

#include <iostream>
#include <algorithm>
#include <vector>

int main1() {
    int n1=0,n2=0,n3=0;
    std::cout << "Enter numbers \n";
    std::cin >> n1 >> n2 >> n3;
    std::cout << std::max(n1, std::max(n2, n3)) << std::endl;
    return (0);
}

// 2. Find min of 3 elements
int main2() {
    int n1=0,n2=0,n3=0;
    std::cout << "Enter numbers \n";
    std::cin >> n1 >> n2 >> n3;
    std::cout << std::min(n1, std::min(n2, n3)) << std::endl;
    return (0);
}
// 3. Find mid elements out of 3 elements
int main3() {
    int n1=0,n2=0,n3=0, left=0,right=0;
    std::cout << "Enter numbers \n";
    std::cin >> n1 >> n2 >> n3;
    //std::cout << std::max(n1, std::max(n2, n3)) << std::endl;
    if ((n1 < n2 and n2 < n3) or (n3 < n2 and n2 < n1)) {
        std::cout << n2 << std::endl;
    }
    else if ((n2 < n1 and n1 < n3) or (n3 < n1 and n1 < n2)) {
        std::cout << n1 << std::endl;
    }
    else {
        std::cout << n3 << std::endl;
    }
    return (0);
}
// 4. Series
/*
1

1 2

1 2 3

1 2 3 4

1 2 3 4 5
*/
int main4() {
    for (uint i=1;i<=5;++i){
        for (uint j=1;j<=i;++j) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
    return (0);
}

// 5. Series
/*
1 2 3 4 5

1 2 3 4

1 2 3

1 2

1
*/

int main5() {
    for (uint i=5;i>=1;--i){
        for (uint j=1;j<=i;++j) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
    return (0);
}
// 6. Return all odd elements from array [1,5,6,4,3,2,8] should return => [1,5,3]
int main6() {
    std::vector <int> vecObj;
    vecObj.push_back(1);
    vecObj.push_back(5);
    vecObj.push_back(6);
    vecObj.push_back(4);
    vecObj.push_back(3);
    vecObj.push_back(2);
    vecObj.push_back(8);
    for (int i =0;i<vecObj.size();++i){
        //std::cout << vecObj[i] << " ";
        if (vecObj[i] & 1 == 1) {
            std::cout << vecObj [i] << " ";
        }
    }
    std::cout << std::endl;
    return (0);
}
// 7. Find sum of array elements [1,2,6,3,5] should return => 17
int main7() {
    std::vector <int> vecObj;
    vecObj.push_back(1);
    vecObj.push_back(2);
    vecObj.push_back(6);
    vecObj.push_back(3);
    vecObj.push_back(5);
    int sum=0;
    for (uint i=0;i<vecObj.size();++i){
        sum += vecObj[i];
    }
    std::cout << sum << std::endl;
    return (0);
}
// 8. Find first even number in array if there is no even return -1 
// [1,2,6,3,5] => should return 2
// [1,7,6,3,5] => should return -1
// [1,7,4,8,5] => should return 4
int returnEven(std::vector<int >& );
int returnEven(std::vector<int >& received) {
    int even = 0;
    for (int i =0;i<received.size();++i){
        //std::cout << received [i] << " \n";
        if (not (received [i] & 1 == 1)) {
            even = received [i];
            break;
        }
        if ((received[i] & 1 == 1)) {
            even = -1;
        }
    }
    return (even);
}

int main() {
    std::vector <int> vecObj1;
    std::vector <int> vecObj2;
    std::vector <int> vecObj3;

    vecObj1.push_back(1);
    vecObj1.push_back(2);
    vecObj1.push_back(6);
    vecObj1.push_back(3);
    vecObj1.push_back(5);

    vecObj2.push_back(1);
    vecObj2.push_back(7);
    vecObj2.push_back(9);
    vecObj2.push_back(3);
    vecObj2.push_back(5);
       
    vecObj3.push_back(1);
    vecObj3.push_back(7);
    vecObj3.push_back(4);
    vecObj3.push_back(8);
    vecObj3.push_back(5);

    std::cout << returnEven (vecObj1) << std::endl;
    std::cout << returnEven (vecObj2) << std::endl;
    std::cout << returnEven (vecObj3) << std::endl;
    return (0);
}
// Array 1 june 

3
/* 
https://leetcode.com/problems/two-sum/ 
*/ 
 
class Solution { 
public: 
    vector<int> twoSum(vector<int>& nums, int target) { 
        int i{0},j{0}; 
        for (i=0;i<nums.size();++i) { 
            std::cout << nums[i] << " "; 
            for (j = i+1;j<nums.size();++j) { 
                if (nums[i] + nums[j] == target) { 
                    //break; 
                    return {i,j}; 
                } 
            } 
        } 
        return{i,j}; 
    } 
}; 
 
/* 
https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/ 
*/ 
 
class Solution { 
public: 
    vector<int> twoSum(vector<int>& numbers, int target) { 
        vector<int> output{}; 
        int size = (numbers.size()-1); 
        int i{}, j{size},sum {}; 
        output.clear(); 
         
        while(i<j){ 
            sum=numbers[i]+numbers[j]; 
            std::cout << sum << std::endl; 
            if (sum == target) { 
                output.push_back(i+1); 
                output.push_back(j+1); 
            } 
            if (sum<target){ 
                std::cout << "If \n"; 
                i++; 
            } else { 
                std::cout << "Else \n"; 
                j--; 
            } 
        } 
        return {output}; 
    } 
}; 
 
/* 
https://leetcode.com/problems/merge-sorted-array/
*/ 
 
class Solution { 
public: 
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) { 
        for (int i=0;i<n;++i){ 
            nums1[m+i] = nums2[i]; 
        } 
        for (const auto& i:nums1) { 
            std::cout << i << " "; 
        } 
        std::cout << std::endl; 
        std::sort(nums1.begin(),nums1.end()); 
    } 
}; 
 
/* 
https://leetcode.com/problems/pascals-triangle/ 
*/ 
 
class Solution { 
public: 
    vector<vector<int>> generate(int numRows) { 
        vector<vector<int>> generateAns{}; 
        for (int i=0;i<numRows;++i){ 
            std::vector<int> rowVector(i+1); 
            rowVector[0] =1; 
            rowVector[i] =1; 
            for (int j=1;j<i;++j){ 
                rowVector[j] = generateAns[i-1][j] + generateAns[i-1][j-1]; 
            } 
            generateAns.push_back(rowVector); 
        } 
        return (generateAns); 
    } 
}; 
 
/* 
https://leetcode.com/problems/pascals-triangle-ii/description/ 
*/ 
 
class Solution { 
public: 
    vector<int> getRow(int row) { 
        //row starts from 0, means 3rd row will have 4 elements 
        vector<int> ans(row+1,1); 
 
        long prev=1; 
        for(int j=1;j<=row-1;j++){ 
            prev = prev * (row-j+1) / j;   
            ans[j] = prev;  
        }  
        return ans;    
    } 
}; 
 
/* 
https://leetcode.com/problems/best-time-to-buy-and-sell-stock/ 
*/ 
 
class Solution { 
public: 
    int maxProfit(vector<int>& prices) { 
        int profitMax{}, minPrice{INT_MAX}; 
 
        for (int i=0;i<prices.size();++i){ 
            if (prices[i] - minPrice > profitMax){ 
                profitMax = prices[i] - minPrice; 
            } 
            else if (prices[i] < minPrice){ 
                minPrice =  prices[i]; 
            } 
        } 
        return (profitMax); 
    } 
}; 
 
/* 
https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/ 
*/ 
 
class Solution { 
public: 
    int maxProfit(vector<int>& prices) { 
        if (prices.size() <= 1) 
            return (0); 
        int maxProfit{}; 
 
        for (int i=0;i<=prices.size()-2;++i){ 
            if (prices[i+1] > prices[i]) { 
                maxProfit += prices[i+1] - prices[i]; 
            } 
        } 
        return (maxProfit); 
    } 
}; 
 
/* 
https://leetcode.com/problems/majority-element/ 
*/ 
 
class Solution { 
public: 
    int majorityElement(vector<int>& nums) { 
        int returnValue{}; 
        int majorityElement = nums.size()/2; 
        std::unordered_map<int, int> uMp{}; 
 
        for (int i=0;i<nums.size();++i){ 
            uMp[nums[i]]++; 
        } 
 
        for (const auto& i : uMp){ 
            if (i.second > majorityElement) { 
                returnValue = i.first; 
            } 
        } 
        return (returnValue); 
    } 
}; 
 
/* 
https://leetcode.com/problems/majority-element-ii/ 
*/ 
 
class Solution { 
public: 
    vector<int> majorityElement(vector<int>& nums) { 
        std::vector<int> returnValue{}; 
        int majorityElement = nums.size()/3; 
 
        std::unordered_map<int, int> uMp{}; 
 
        for (int i=0;i<nums.size();++i){ 
            uMp[nums[i]]++; 
        } 
 
        for (const auto& i : uMp){ 
            if (i.second > majorityElement) { 
                //returnValue = i.first; 
                returnValue.push_back(i.first); 
            } 
        } 
        return (returnValue); 
         
    } 
}; 
 
 
/* 
https://leetcode.com/problems/missing-ranges/  
*/ 
 
 
/* 
https://leetcode.com/problems/3sum/ 
*/ 
 
class Solution { 
public: 
    vector<vector<int>> threeSum(vector<int>& nums) { 
        std::sort(nums.begin(),nums.end()); 
        vector<vector<int>> threeSumOutput{}; 
        std::set <std::vector <int>> sPush {}; 
        int size = nums.size(); 
        int sum{}, target{0}; 
