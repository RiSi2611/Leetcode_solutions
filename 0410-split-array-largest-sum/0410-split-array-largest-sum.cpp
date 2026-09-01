class Solution {
public:
    bool isValid(vector<int>& nums,int mid ,int n, int k){
        int count=1;
        int total =0;
        for(int i=0; i<n;i++){
            if (nums[i]> mid) return false;
            if(total + nums[i] <=mid){
                total += nums[i];
            }
            else {
                count ++ ;
                total = nums[i];
            }
        }
        return count > k ? false : true ;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        if( n < k) return -1;
        int sum  =0 ;int mid ;
        int maxSum =0;
        for(int i=0;i<n;i++){
            sum += nums[i];
        }
        int st = 0 , end =sum;
        while (st <= end){
            mid = st +(end - st)/2 ;

            if(isValid(nums , mid ,n, k)){
                maxSum = mid ;
                end = mid -1;
            }
            else {
                st = mid +1 ;
            }
        }
        return maxSum  ;
    }
};