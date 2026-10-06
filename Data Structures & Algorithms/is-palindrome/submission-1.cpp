#include <cctype>
class Solution {
public:
    bool isPalindrome(string s) {
        string newone="";
         for (auto c : s) {
            if (std::isalnum(static_cast<unsigned char>(c))) {
                newone += std::tolower(static_cast<unsigned char>(c));
            }
        }
        int left=0;
        int right=newone.size()-1;

        while (left < right) {
            if (newone[left] != newone[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
