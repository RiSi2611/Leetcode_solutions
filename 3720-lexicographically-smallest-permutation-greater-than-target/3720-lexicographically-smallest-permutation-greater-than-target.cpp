class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int n = s.length();
        vector<int> frequency(26 ,0);
        for(int i =0 ; i<n ; i++){
            frequency[s[i] - 'a'] ++ ;
        }
        string ans ="";

        for(int i =0 ; i<n ;i++){
            if(frequency[target[i]-'a'] >0){
                ans += target[i];
                frequency[target[i]-'a'] -- ;
            }
            else {
                for(char ch = 'a' ; ch <= 'z' ; ch ++){
                    if(ch >target[i] && frequency[ch - 'a'] >0){
                        ans += ch;
                        frequency[ch-'a'] -- ;
                        for(int i=0 ;i <26 ; i++){
                            while(frequency[i]>0){
                                ans += char(i+'a');
                                frequency [i]--;
                            }
                        }
                        return ans;
                    }  
                }
                break;
            }
        }
        for(int i= (int)ans.size()-1;i>=0;i--){
            frequency[ans[i]-'a'] ++ ;
            ans.pop_back();

            for(char ch= target[i]+1 ; ch <='z' ; ch++){
                if(frequency[ch-'a']>0){
                    ans += ch;

                    frequency[ch-'a'] -- ;

                    for(int j =0 ; j<26 ; j++){
                        while(frequency[j]>0){
                            ans += char(j+'a');
                            frequency[j]--;
                        }
                    }
                    return ans;
                }
            }
        }


        return "";
    }
};