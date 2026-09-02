class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n= mat.size();
        int sum =0;

        int i=0, j = 0;
        while(i <n && j<n){
            sum += mat[i][j];
            i++ ; j++ ;
        }
        int k =0 ,l = n-1;
        while(k<n && l>=0){
            if(k!=l){
                sum += mat[k][l];
            }
            k++ ; l--;
        }
        return sum;
    }
};