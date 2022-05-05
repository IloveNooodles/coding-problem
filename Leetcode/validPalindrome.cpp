class Solution {
public:
    bool isPalindrome(string s) {
        string ans = removeSpace(s);
        int len = ans.length();
        if(len == 0 || len == 1) return true;
        int i = 0;
        while(i < len / 2){
            if(ans[i] != ans[len - i - 1]) {
                return false;
            };
            i++;
        }
        return true;
    }
    
    string removeSpace(string s){
        string ans = "";
        int len = s.length();
        int i = 0;
        while(i < len){
            if(s[i] == ' '){
                i++;
                continue;
            } 
            if(s[i] <= 122 && s[i] >= 97) ans += (s[i] - 97 + 65);
            else if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 48 && s[i] <= 57)) ans += s[i];
            i++;
        }
        return ans;
    }
};
