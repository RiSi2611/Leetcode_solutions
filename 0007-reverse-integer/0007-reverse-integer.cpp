class Solution {
public:
    int reverse(int x) {
        int remain =0;
        long long reverse = 0;
        if(x >= -9 && x <= 9) return x;
        if (x == INT_MIN) return 0;
        if(x <0){
            x = abs(x);
            while(x>0){
                remain = x%10;
                if(reverse *10 > INT_MAX) return 0;
                else{
                    reverse = reverse *10 + remain;
                    x = x/10;
                }
            }
            if(reverse > (INT_MAX)){
                return 0;
            } 
            else return (-1)*reverse;
        }
        else {
            while(x>0){
                remain = x%10;
                reverse = reverse *10 + remain;
                x = x/10;
            }
            if(reverse > INT_MAX){
                return 0;
            }
            else return reverse;
        }
    }
};