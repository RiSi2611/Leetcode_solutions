class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int max_count=0;
        for(int i=0;i<n;i++){
            int cc=0;
            if(nums[i]!=1){
                continue;
            }
            else{
                while(i<n && nums[i]==1){
                    cc ++;
                    i++;
                }
                if(cc> max_count){
                    max_count = cc;
                }
            }
        }
        return max_count;
    }
};