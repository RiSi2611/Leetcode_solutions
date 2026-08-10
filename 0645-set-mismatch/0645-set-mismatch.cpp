class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       int n = nums.size();
        int n_sum = n*(n+1)/2;
        int act_sum = 0;
        vector<int> values;
        int repeating , missing;
        for(int i=0;i<n;i++){
            act_sum += nums[i];
        }
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                repeating = nums[i];
                break;
            }
        }
        int difference = n_sum - act_sum;
        missing = repeating + difference;
        values.push_back(repeating);
        values.push_back(missing);
        return values;
    }
};