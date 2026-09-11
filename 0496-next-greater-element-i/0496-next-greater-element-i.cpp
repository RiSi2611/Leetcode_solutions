class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> ans(n ,0);
        stack<int> s;

        unordered_map <int,int> mp;
        for(int i = m-1 ; i>=0; i--){
            while(s.size()>0 && nums2[i] >= s.top()){
                s.pop();
            }
            if(s.empty()){
                mp[nums2[i]] = -1;
            }
            else{
                mp[nums2[i]] = s.top();
            }
            s.push(nums2[i]);
        }
        for(int i=0 ;i<n ; i++){
            ans[i]= mp[nums1[i]];
        }
        return ans;
    }
};