class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> p1;
        vector<int> p2;
        for(int i=0;i<n;i++){
            p1.push_back(nums[i]);
            p2.push_back(nums[n+i]);
        }
        for(int i=0;i<n;i++){
            nums[2*i]=p1[i];
            nums[2*i+1]=p2[i];
        }
        return nums;
    }
};