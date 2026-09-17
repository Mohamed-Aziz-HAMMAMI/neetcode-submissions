#include <unordered_set>

class Solution {
public:
    bool hasDuplicate(const std::vector<int>& nums) {
        // Constructing a set removes duplicates automatically
        std::unordered_set<int> unique_set(nums.begin(), nums.end());
        
        // If the set size is smaller, duplicates were filtered out
        return unique_set.size() != nums.size();
    }
};