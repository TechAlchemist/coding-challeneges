#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        #include <string>
        // convert to string
        string originalInt = to_string(x);
        // make an empty string to build comparison
        string comparison = "";
        // flip the string
        for (int i = originalInt.size() - 1; i >= 0; i--) {
            comparison += originalInt[i];
        }
        // return comparison
        return comparison == originalInt ? 1 : 0;
    }
};

int main() {
  Solution s;
  cout << s.isPalindrome(1012);
}