
class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        long long k = (long long)k1 + k2;

        vector<long long> d(n);
        long long maxD = 0, sumD = 0;

        for (int i = 0; i < n; i++) {
            d[i] = abs((long long)nums1[i] - nums2[i]);
            maxD = max(maxD, d[i]);
            sumD += d[i];
        }

        if (sumD <= k) return 0;

        long long low = 0, high = maxD;

        while (low < high) {
            long long mid = low + (high - low) / 2;
            long long needed = 0;

            for (long long x : d) {
                if (x > mid)
                    needed += x - mid;

                if (needed > k) break;
            }

            if (needed <= k)
                high = mid;
            else
                low = mid + 1;
        }

        long long x = low;
        long long needed = 0;
        long long ans = 0;

        for (long long v : d) {
            needed += max(0LL, v - x);
            long long val = min(v, x);
            ans += val * val;
        }

        long long rem = k - needed;
        ans -= rem * (2 * x - 1);

        return ans;
    }
};
