class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        vector<double> merged ;

        int i =0 ; int j =0;
        while( i < m && j < n){
            if(nums1[i] < nums2[j]){
                merged.push_back(nums1[i]);
                i++ ;
            }
            else{
                merged.push_back(nums2[j]);
                j++;
            }
        }
        while( i < m){
            merged.push_back(nums1[i]);
            i++ ;
        }
        while( j < n){
            merged.push_back(nums2[j]);
            j++ ;
        }
        int a = merged.size();
        if(a==1) return merged[0];
        double median ; 
        if(a %2 == 1){
            median = merged[a/2];
            return median;
        }
        else{
           
            median = (merged[a/2]+ merged[a/2 -1]) /2 ;
            return median;
        }
    }
};