class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int  n = accounts.size();
        
        int m = accounts[0].size();
        
        int rowSum;
        int maxSum=0;

        for(int i =0;i<n;i++){
            rowSum=0;
            for(int j=0;j<m;j++){
                rowSum += accounts[i][j];
            }
            maxSum = max(maxSum,rowSum);
        }
        return maxSum;
    }
};