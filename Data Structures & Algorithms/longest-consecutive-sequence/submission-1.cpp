class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) {
        return 0;
    }
        vector<int> sorted_vec=nums;
        std::sort(sorted_vec.begin(),sorted_vec.end());
        auto last = std::unique(sorted_vec.begin(), sorted_vec.end());

    // 3. Erase the trailing duplicate elements
        sorted_vec.erase(last, sorted_vec.end());
        int index=1;
        int count=1;
        int current=1;
        for (int i=1;i<sorted_vec.size();i++){
            if(sorted_vec[i]==sorted_vec[i-1]+1){
                current++;
            }
            else{
                current=1;
            }
            count=max(count,current);
        }
        return count;
    }
};
