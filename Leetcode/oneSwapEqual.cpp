class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2) return true;
        vector<int> diffIdx;
        int diffCount = 0;
        int len = s1.size();
        for(int i = 0; i < len; i++) {
            if (s1[i] != s2[i]) {
                diffCount++;
                diffIdx.push_back(i);
            }
        }
        return diffCount == 2 && sameSet(s1, s2, diffIdx);
    }
    
    bool sameSet(string s1, string s2, vector<int> diffIdx){
        int idx1 = diffIdx[0];
        int idx2 = diffIdx[1];
        return s1[idx1] == s2[idx2] && s1[idx2] == s2[idx1];
    }
};
