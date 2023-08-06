class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int size = s.size();
        int wordSize = wordDict.size();
        vector<bool> dp(size+1, false);
        for(int i = 0; i < size; i++){
            for(int j = 0; j < wordSize; j++){
                int curSize = wordDict[j].size();
                if(i < curSize - 1) continue; 
                string cur = s.substr(i - curSize + 1, curSize);
                if((i == curSize - 1 || dp[i - curSize]) && cur == wordDict[j]){
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[size - 1];
    }
};
