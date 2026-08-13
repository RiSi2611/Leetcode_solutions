class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int n= grid.size();
        int m = grid[0].size();
        int st= x;int end = x+k-1;
        if(k==1){
            return grid;
        }
        while(st<end){
            for(int i=y; i<y+k;i++){
                swap(grid[st][i],grid[end][i]);
            }
            st++;end--;
        }
        return grid;
    }
};