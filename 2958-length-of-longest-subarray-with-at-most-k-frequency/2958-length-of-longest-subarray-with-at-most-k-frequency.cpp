class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int left=0;
        int ans=0;
        unordered_map<int,int> value;
        for(int right =0;right < nums.size();right++){
            value[nums[right]]++;
            while(value[nums[right]]>k){
                value[nums[left]]--;
                left++;
            }
            ans = max(ans,right-left+1);
        }
    return ans;
    }
};