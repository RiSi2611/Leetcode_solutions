class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.length();
        int left = 0;
        int right =0;
        int count =0;
        int max=0;
        unordered_map<char,int> ch;
        while(right <n && left <=right){
            ch[s[right]] ++;
            if(ch[s[right]] >2){
                ch[s[left]]--;
                left ++;
                // right --;
                count --;
                while(ch[s[right]] !=2){
                    ch[s[left]]--;
                    left ++;
                    count --;
                }
            }
            count ++;
            if(count>max){
                max =count;
            }
            right ++;
        }
        return max;
    }
};