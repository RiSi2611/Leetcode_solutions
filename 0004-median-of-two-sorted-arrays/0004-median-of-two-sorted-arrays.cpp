class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        if (m > n) {
            return findMedianSortedArrays(nums2, nums1);
        }

        if (m == 0) {
            if (n % 2 == 1)
                return (nums2[n / 2]);
            else
                return (nums2[n / 2 - 1] + nums2[n / 2]) / 2.0;
        }
        if (n == 0) {
            if (m % 2 == 1)
                return (nums1[m / 2]);
            else
                return (nums1[m / 2 - 1] + nums1[m / 2]) / 2.0;
        }

        int leftSize = (m + n + 1) / 2;
        int low = 0, high = m;

        while (low <= high) {
            int partition1 = low + (high - low) / 2;
            int partition2 = leftSize - partition1;

            int left1 = (partition1 == 0) ? INT_MIN : nums1[partition1 - 1];
            int right1 = (partition1 == m) ? INT_MAX : nums1[partition1];

            int left2 = (partition2 == 0) ? INT_MIN : nums2[partition2 - 1];
            int right2 = (partition2 == n) ? INT_MAX : nums2[partition2];

            if (left1 > right2) {
                high = partition1 - 1;
            } else if (left2 > right1) {
                low = partition1 + 1;
            } else {
                if ((m + n) % 2 == 1) {
                    return max(left1, left2);
                } else {
                    return ((max(left1, left2)) + (min(right1, right2))) / 2.0;
                }
            }
        }
        return -1;
    }
};