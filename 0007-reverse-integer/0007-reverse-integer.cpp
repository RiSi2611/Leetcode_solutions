class Solution {
public:
    int reverse(int x) {
        int remain = 0;
        int reverse = 0;
        if (x >= -9 && x <= 9)
            return x;
        if (x == INT_MIN)
            return 0;
        if (x < 0) {
            x = abs(x);
            while (x > 0) {
                remain = x % 10;
                if (reverse > INT_MAX / 10 ||
                    (reverse == INT_MAX / 10 && remain > 7))
                    return 0;
                else {
                    reverse = reverse * 10 + remain;
                    x = x / 10;
                }
            }
            if (reverse > (INT_MAX)) {
                return 0;
            } else
                return (-1) * reverse;
        } else {
            while (x > 0) {
                remain = x % 10;
                if (reverse > INT_MAX / 10 ||
                    (reverse == INT_MAX / 10 && remain > 7))
                    return 0;
                reverse = reverse * 10 + remain;
                x = x / 10;
            }

            return reverse;
        }
    }
};