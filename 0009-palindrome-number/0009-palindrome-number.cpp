class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0 || (x%10==0 && x!=0)) return false;
        if (x==0) return true;
        int remain=0;
        int reversedHalf=0;
        while(x>reversedHalf){
            remain = x%10;
            reversedHalf = reversedHalf *10 + remain;
            x /= 10;
        }
        if (x==reversedHalf || x==reversedHalf /10)return true;
        else return false;
    }
};