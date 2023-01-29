class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size() == 0 || s.size() > t.size()) return true;        
        vector<int> firstPos;
        int tSize = t.size();
        for(int i = 0; i < tSize; i++){
            if(s[0] == t[i]) firstPos.push_back(i);
        }

        int loopSize = firstPos.size();
        int sSize = s.size();
        for(int i = 0; i < loopSize; i++){
            int rightMost = -1;
            int iterator = 0;
            for(int j = firstPos[i]; j < tSize; j++){
                if(t[j] == s[iterator] && rightMost < j){
                    iterator++;
                    rightMost = j;
                }
                if(iterator == s.size()) return true;
            }
        }

        return false;
    }
};
