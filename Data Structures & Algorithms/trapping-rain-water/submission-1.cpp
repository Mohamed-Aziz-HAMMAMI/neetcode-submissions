class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        vector<int> maxprefix(n), maxsuffix(n);

        maxprefix[0] = height[0];
        for (int i = 1; i < n; i++)
            maxprefix[i] = std::max(maxprefix[i-1], height[i]);

        maxsuffix[n-1] = height[n-1];
        for (int i = n-2; i >= 0; i--)
            maxsuffix[i] = std::max(maxsuffix[i+1], height[i]);

        int output = 0;
        for (int i = 0; i < n; i++) {
            output += std::min(maxprefix[i], maxsuffix[i]) - height[i];
        }
        return output;
    }
};