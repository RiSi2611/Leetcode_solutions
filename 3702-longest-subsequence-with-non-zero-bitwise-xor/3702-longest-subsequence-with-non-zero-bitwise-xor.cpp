class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int right = 0;
        int curr = 0;
        int max = 0;
        bool hasnonzero = false;
        for (int i = 0; i < n; i++) {
            curr ^= nums[i];
            if (nums[i] != 0) {
                hasnonzero = true;
            }
        }
        if (curr != 0) {
            return n;
        }
        if (hasnonzero) {
            return n - 1;
        }
        return 0;
    }
};