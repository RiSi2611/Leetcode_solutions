class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return nums[0];
        if(n >2){
            if(nums[0]!= nums[1])return nums[0];
            if(nums[n-1] != nums[n-2]) return nums[n-1];
        }
        int st = 1; int end = n-2;
        int last = n-1 ;
        while(st <= end){
            int mid = st + (end - st)/2 ;
            if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
                return nums[mid];
            }
            if(((last - mid)% 2 ==0 && nums[mid]!=nums[mid+1]) ||((last - mid)% 2 ==1 && nums[mid]==nums[mid+1])){
                end = mid -1 ;
            }
            else if (((last - mid)% 2 ==0 && nums[mid]==nums[mid+1]) ||((last - mid)% 2 ==1 && nums[mid]!=nums[mid+1])){
                st = mid+1;
            }
        }
        return -1;
    }
};