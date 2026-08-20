class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int cs=0;
        int max_sum=nums[0];
        for(int i=0;i<n;i++){
            cs += nums[i];
            if(cs>max_sum){
                max_sum = cs;
            }
            if(cs<0){
                cs=0;
            }
        }
        return max_sum;
    } 
};