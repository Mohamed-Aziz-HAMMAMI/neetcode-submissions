class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int num: nums){
            freq[num]++;
        }
        vector<pair<int,int>> ordered;
        for(auto& p: freq){
            ordered.push_back({p.second, p.first});
        }
        vector<int> result;
        std::sort(ordered.rbegin(),ordered.rend());
        for(int p=0;p<k;p++){
            result.push_back(ordered[p].second);
        }
        return result;
    }
};
