class Solution {
public:
    int minInsertions(string s) {
        int n = s.length();
        int insert = 0;
        int open =0;

        for(int i=0; i<n ;i++){
            if(s[i]=='('){
                open ++;
            }
            else{
                if(i+1 <n && s[i+1]==')'){
                    i++;
                    
                }
                else{
                    insert ++;
                }
                if(open >0){
                    open--;
                }
                else{
                    insert ++;
                }
            }
        }
        return insert +2 *open;
    }
}
;