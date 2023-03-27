class Solution {
public:
    int characterReplacement(string s, int k) {
        int size = s.size();
        vector<int> freq(26, 0);
        int left = 0;
        int maxFreqCount = 0;
        int longest = 0;
        for(int right = 0; right < size; right++){
            freq[s[right] - 'A']++;
            maxFreqCount = max(maxFreqCount, freq[s[right] - 'A']);
            // //count the replacement count
            // //length - maxFreqCount will be the characters need to change
            while(right - left + 1 - maxFreqCount > k){
                freq[s[left] - 'A']--;
                left++;
                //update maxFreqCount
                for(int i = 0; i < 26; i++){
                    maxFreqCount = max(maxFreqCount, freq[i]);
                }
            }
            longest = max(longest, right - left + 1);
        }
        return longest;
    }
};

//0123456789 
//AABABBA
//  l  r
