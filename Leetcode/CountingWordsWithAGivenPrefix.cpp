class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int size = words.size();
        int prefSize = pref.size();
        int ans = 0;
        for(int i = 0; i < size; i++){
            string word = words[i];
            if(prefSize > word.size()) continue;
            string prefSliceWord = word.substr(0, prefSize);
            if(pref == prefSliceWord) ans++;
        }
        return ans;
    }
};
