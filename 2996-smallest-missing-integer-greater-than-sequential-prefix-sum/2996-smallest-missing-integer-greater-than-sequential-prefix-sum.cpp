class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n= nums.size();
        if(n==1){
            return nums[0]+1;
        }
        int sum=nums[0];int i=0;
        int smallest;
        while(i<n-1 && (nums[i+1]-nums[i]==1)){
            sum+= nums[i+1];
            i++;
        }
        if(i==n-1){
            return sum;
        }
        sort(nums.begin()+(i+1),nums.end());

        smallest =sum;
        for(int j=i;j<n;j++){
            if(nums[j]== smallest){
                smallest +=1;
            }
        }
        return smallest;
    }
};