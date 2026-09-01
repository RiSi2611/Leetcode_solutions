class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n= nums.size();
        int pivot;
        for(int i=n-2;i>=0 ;i--){
            if(nums[i]==0){
                pivot =i;
                while(pivot <n-1){
                    swap(nums[pivot],nums[pivot+1]);
                    pivot++;
                }
            }
        }
    }
};