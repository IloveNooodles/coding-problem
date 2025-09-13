class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26] = {0};
        for(int i = 0; i < s.size(); i++){
            freq[s[i]-'a']++;
        }


        int maxVocal = 0, maxCons = 0;
        for(int i = 0; i < 26; i++){
            int curFreq = freq[i];
            if(i == 'a' - 'a' || i == 'i' - 'a' || i == 'u' - 'a' || i == 'e' - 'a' || i == 'o' - 'a') {
                maxVocal = max(maxVocal, curFreq);
            } else {
                maxCons = max(maxCons, curFreq);
            }
        }

        return maxVocal + maxCons;
    }
};
