class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();

        string ans="";

        int lc =0, rc=0;
        for(int i=0 ;i <n ;i++){
            if(s[i]=='(')lc++;
            else rc++;
            if(lc==rc){
                for(int j= i-lc -rc +2 ; j< i ;j++){
                    ans += s[j];
                }
                lc =0; rc =0;
            }
            
        }
        return ans;
    }
};