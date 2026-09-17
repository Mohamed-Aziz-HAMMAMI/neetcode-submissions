#include <unordered_set>
#include <algorithm>
class Solution {
public:
    bool hasDuplicate(const std::vector<int>& nums) {
        vector<int> copy=nums;        
        std::sort(copy.begin(),copy.end());
        auto duplicate_start = std::unique(copy.begin(), copy.end());
        return duplicate_start != copy.end();
    }
};