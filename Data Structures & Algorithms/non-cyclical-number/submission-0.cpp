#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

class Solution {
public:
    bool isHappy(int n) {
        std::vector<int> seen;
        int temp = 0;

        while (n != 1) {

            // If we've already seen n, we're in a cycle
            if (std::ranges::find(seen, n) != seen.end()) {
                return false;
            }

            seen.push_back(n);

            std::string num_str = std::to_string(n);

            for (int i = 0; i < num_str.size(); i++) {
                int digit = num_str[i] - '0';
                temp += digit * digit;
            }

            n = temp;
            temp = 0;
        }

        return true;
    }
};