class Solution {
public:
    bool checkDivisibility(int n) {
        int m =n;
        int sum=0;
        int product =1;
        int remain ;
        while(m>0 ){
            remain = m%10;
            sum += remain;
            product *= remain;
            m /= 10;
        }
        int newSum = sum + product;
        if(n % newSum == 0) return true;
        else return false  ;
    }
};