class Solution {
public:
    string clearDigits(string s) {
        stack<char> a;
        int size = s.size();
        for(int i = 0 ; i < size; i++){
            if(isdigit(s[i])){
                if(!a.empty()) a.pop();
            } else {
                a.push(s[i]);
            }
        }

        string ans = "";
        while(!a.empty()){
            ans += a.top();
            a.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

// cccb34a
// ccc4a
// cca
//
