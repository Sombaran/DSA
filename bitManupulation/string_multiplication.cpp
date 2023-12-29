

#include <iostream>
#include <cstring>
#include <vector>

class playString {
public:
int convertStringToInterger (std::string receivedString) {
    int output=0;

    for (int i=0;i<receivedString.size();++i)
        output = output * 10 + (receivedString[i]-'0');
    std::cout << output << std::endl;
    return output;
}


};

int main () {
playString stringObj;
std::string s1,s2; std::cin>> s1 >> s2;
int integer1 = stringObj.convertStringToInterger(s1);
int integer2 = stringObj.convertStringToInterger(s2);
std::cout << __func__ << integer1 << " " << s2 << std::endl;
int answer = (integer1 * integer2);
std::cout << "Final answer " << answer << std::endl;
return (0);
};
