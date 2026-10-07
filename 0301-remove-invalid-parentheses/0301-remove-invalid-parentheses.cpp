class Solution {
public:
    bool isValid(string s) {
        int balance = 0;

        for(char c : s) {

            if(c == '(')
                balance++;

            else if(c == ')')
                balance--;

            if(balance < 0)
                return false;
        }

        return balance == 0;
    }

    vector<string> removeInvalidParentheses(string s) {

        vector<string> ans;

        queue<string> q;
        unordered_set<string> visited;

        q.push(s);
        visited.insert(s);

        bool found = false;

        while(!q.empty()) {

            string curr = q.front();
            q.pop();

            // Check current string
            if(isValid(curr)) {
                ans.push_back(curr);
                found = true;
            }

            // If valid strings found at this level,
            // don't generate strings with more removals
            if(found)
                continue;

            // Remove one character
            for(int i = 0; i < curr.size(); i++) {

                // We only need to remove parentheses
                if(curr[i] != '(' && curr[i] != ')')
                    continue;

                string next = curr.substr(0, i) +
                              curr.substr(i + 1);

                if(visited.find(next) == visited.end()) {
                    visited.insert(next);
                    q.push(next);
                }
            }
        }

        return ans;
    }
};