class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n= nums1.size();
        bool a= true;
        for(int i=0 ; i<n ; i++){
            if(nums1[i] %2 != 0){
                a = false;
            }
            if(a== false)break;
        }
        if(a == true) return true;

        int min = nums1[0];
        for(int x : nums1){
            if(x<min)min = x;
        }
        if(min %2 == 1)return true;
        else return false;
        
    }
};