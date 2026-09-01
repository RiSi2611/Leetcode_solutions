class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if(n==1 || n==2) return n;

        int max_idx = 0;
        int min_idx =0 ;

        for(int i=0 ; i<n ; i++){
            if(nums[i] > nums[max_idx]){
                max_idx =i;
            }
            if(nums[i]< nums[min_idx]){
                min_idx =i;
            }
        }
        if(min_idx >= n/2 && max_idx >= n/2)return n-min(max_idx,min_idx);
        else if (min_idx <= n/2 && max_idx <= n/2) return max( max_idx,min_idx)+1;
        else return min({(n-max(min_idx , max_idx))+(min(max_idx , min_idx)+1) , max(max_idx , min_idx)+1 , n-min(max_idx , min_idx)});
    }
};