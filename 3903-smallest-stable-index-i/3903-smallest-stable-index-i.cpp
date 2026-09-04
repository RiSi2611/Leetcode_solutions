class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int small = -1;
        int diff = INT_MAX;
        for(int i=0; i<n ; i++){
            int j=0;
            int p=i;
            int high = nums[0];
            int low = nums[i];
            while(j<=i){
                high = max(high , nums[j]);
                j++;
            }
            while(p<n){
                low = min(low , nums[p]);
                p++ ; 
            }

            if(high - low <= k){
                return i;
            }
        }
        return -1;
    }
};