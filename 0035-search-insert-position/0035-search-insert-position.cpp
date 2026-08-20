class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();
        int st =0; int end = n-1;
        int mid =0;
        if (target > nums[end]) return n;
        if(target < nums[st]) return 0;
        
        while(st <= end){
            mid = st+(end-st)/2;
            if(nums[mid]== target){
                return mid;
            }
            if(nums[mid]>target){
                end = mid-1;
            }
            else {
                st = mid+1;
            }
        }
        if((nums[mid] < target)&& nums[mid+1]>target)return mid+1;
        if((nums[mid]>target)&& nums[mid-1]<target) return mid;

        return -1;
    }
};