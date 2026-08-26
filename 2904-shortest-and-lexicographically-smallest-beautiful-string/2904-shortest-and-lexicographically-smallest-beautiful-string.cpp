class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.length();
        int right = 0, left = 0;
        string small = "";
        int count = 0;

        while (right < n && right >= left) {
            if (s[right] == '1') {
                count++;
            }
            if (count == k) {
                while (left < right && s[left] == '0') {
                    left++;
                }

                string l = s.substr(left, right - left + 1);
                if (small == "" || l.length() < small.length() ||
                    (l.length() == small.length() && l < small)) {
                    small = l;
                }

                if (s[left] == '1') {
                    count--;
                }
                left++;
            }
            right++;
        }

       
            return small;
    }
};