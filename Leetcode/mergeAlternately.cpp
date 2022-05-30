class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int i = 0; int j = 0;
        int len1 = word1.size(); int len2 = word2.size();
        while(i < len1 && j < len2) {
            ans += word1[i++];
            ans += word2[j++];
        }
        
        if(i < len1) ans += word1.substr(i, len1);
        if(j < len2) ans += word2.substr(j, len2);
        
        return ans;
    }
};
