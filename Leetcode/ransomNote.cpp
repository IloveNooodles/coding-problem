#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> ans(26, 0);
        int size = ransomNote.length();
        for(int i = 0; i < size; i++) {
            ans[ransomNote[i] - 'a']++;
        }
        size = magazine.length();
        for(int i = 0; i < size; i++) {
            if(ans[magazine[i] - 'a']) ans[magazine[i] - 'a']--;
        }
        for(int i = 0; i < 26; i++) {
            if(ans[i]) return false;
        }
        return true;
    }
};

