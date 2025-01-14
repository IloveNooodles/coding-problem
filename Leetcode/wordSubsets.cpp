class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        int prefMax[26] = {0};
        int size = words2.size();
        int size1 = words1.size();

        for(int i = 0; i < size; i++){
            string word = words2[i];
            int wordSize = word.size();
            int pref[26] = {0};
            for(int j = 0; j < wordSize; j++){
                int now = word[j] - 'a';
                pref[now]++;
            }

            for(int j = 0; j < 26; j++){
                prefMax[j] = max(prefMax[j], pref[j]);
            }
        }

        for(int i = 0; i < size1; i++){
            string word = words1[i];
            int wordSize = word.size();
            int pref[26] = {0};
            for(int j = 0; j < wordSize; j++){
                int now = word[j] - 'a';
                pref[now]++;
            }

            bool add = true;
            for(int j = 0; j < 26; j++){
                if(pref[j] < prefMax[j]) {
                    add = false;
                    break;
                }
            }

            if(add) ans.push_back(words1[i]);
        }

        return ans;
    }
};
