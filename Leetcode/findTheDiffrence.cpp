class Solution {
public:
    char findTheDifference(string s, string t) {
        int arr[26] = {0};
        int size = s.size();
        if(size == 0) return t[0];
        int tSize = t.size();
        for (int i = 0; i < size; i++) {
            arr[s[i] - 'a']++;
        }
        for (int i = 0; i < tSize; i++) {
            arr[t[i] - 'a']--;
            if(arr[t[i] - 'a'] < 0) return t[i]; 
        }
        return t[tSize-1];
    }
};
