class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        int n = s.length();
        unordered_map <string,string> m ;
        for(int i = 0; i< knowledge.size(); i++){
            m[knowledge[i][0]] = knowledge[i][1];
        }
        string a ="";
        int i =0;
        while(i < s.size()){
            if(s[i]=='('){
                int j = i+1;
                while(s[j]!=')'){
                    j++;
                }
                string key = s.substr(i+1,j-1-i);

                if(m.find(key) != m.end()){
                    a += m[key];
                }
                else{
                    a += '?';
                }
                i = j+1;    
            }
            else { 
                a += s[i];
                i++;
            }
        }
        return a;
    }
};