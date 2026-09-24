class Solution {
public:
    int smallestIndex(vector<int>& nums) {
         if(nums[0] == 0) return 0;
        int n = nums.size();
        for(int i = 0; i< n; i++){
            int sum =0;
            while(nums[i]>0){
                int remain = nums[i]%10;
                sum += remain;
                nums[i] /= 10;
            }
            if (i == sum) return i;
        }
        return -1;
    }
};