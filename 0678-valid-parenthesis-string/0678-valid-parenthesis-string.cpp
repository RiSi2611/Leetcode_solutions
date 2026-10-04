class Solution {
public:
    bool checkValidString(string s) {
        int n = s.length();
        stack <int > open , star;

        for(int i= 0 ; i<n ; i++){
            if(s[i]=='('){
                open.push(i);
            }
            else if(s[i]== '*'){
                star.push(i);
            }
            else {
                if(!open.empty()){
                    open.pop();
                }
                else if(!star.empty()){
                    star.pop();
                }
                else return false;
            }
        }
        while(!open.empty()&& !star.empty()){
                if(open.top()>star.top()){
                    return false;
                }
                open.pop();
                star.pop();
        }
        return open.size()==0;
    }
};