class Solution {
public:
    int characterReplacement(string s, int k) {
        int size = s.size();
        int left = 0;
        int longest = 0;
        unordered_map<char, int> m;

        int maxFreq = 0;
        for(int right = 0; right < size; right++){
            m[s[right]]++;
            maxFreq = max(maxFreq, m[s[right]]);
            while((right-left+1) - maxFreq > k){
                m[s[left]]--;
                left++;
            }
            longest = max(longest, right - left + 1);
        }
        return longest;
    }
};
