class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map <int,int> m ;
        for(int i = 0 ;i <n ; i++){
            m[nums[i]] ++;
        }
        if(m[k] == 0){
            return k ;
        }
        else {
            int a = k+k;
            while(m[a] !=0){
                a += k ;
            }
            return a ;
        }
        
    }
};