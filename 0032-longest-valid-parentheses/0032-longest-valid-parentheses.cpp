class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.length();

        stack <int> st;
        st.push(-1);
        int i=0;
        int count =0;
        int mcount=0;
        while(i<n){
            if(s[i]== '('){
                st.push(i);
            }
            else{
                st.pop();
                if(st.empty()){
                    st.push(i);
                }
                else{
                    int count = i- st.top();
                    mcount = max(mcount , count);
                }
            }

            i++;  
            
        }
        return mcount;
    }
};