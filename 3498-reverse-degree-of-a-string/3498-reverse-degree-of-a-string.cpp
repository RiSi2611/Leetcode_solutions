class Solution {
public:
    int reverseDegree(string s) {
        
        int sum =0;

        for(int i = 0; i<s.length(); i++){
            int product = 1;
            product *= (i+1); 
            product *= 123 - s[i];
            sum += product;
        }
        return sum;
    }
};