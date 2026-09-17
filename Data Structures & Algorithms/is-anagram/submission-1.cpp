
class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.length() != t.length()) return false;
        
        // Directly sort both strings alphabetically
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        
        // Compare the sorted strings
        return s == t;
    }
};
