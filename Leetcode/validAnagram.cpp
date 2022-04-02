#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> ans(26, 0);
        int size = s.length();
        for(int i = 0; i < size; i++) {
            ans[s[i] - 'a']++;
        }
        size = t.length();
        for(int j = 0; j < size; j++){
            ans[t[j]-'a']--;
        }
        for(int i = 0; i < 26; i++) {
            if(ans[i] != 0) return false;
        }
        return true;
    }
};