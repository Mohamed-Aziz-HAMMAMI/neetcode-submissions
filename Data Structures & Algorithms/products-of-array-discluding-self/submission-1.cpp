class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output;
        int thewhole=1;
        int zerocount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                thewhole=thewhole*nums[i];
            }
            else{
                zerocount++;
            }
        }
        if(zerocount > 1){
            for(int i=0;i<nums.size();i++){
                output.push_back(0);
            }
        }
        else if(zerocount == 1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=0){
                    output.push_back(0);
                }
                else{
                    output.push_back(thewhole);
                }
            }
        }
        else{
            for(int j=0;j<nums.size();j++){
                output.push_back(thewhole/nums[j]);
            }
        }
        return output;
    }
};