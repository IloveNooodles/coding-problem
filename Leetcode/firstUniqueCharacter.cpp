#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> ans(26, 0);
        int size = s.length();
        for(int i = 0; i < size; i++) {
            ans[s[i] - 'a'] += 1;
        }
        for(int i = 0; i < size; i++){
            if (ans[s[i] - 'a'] == 1){
                return i;
            }
        }
        return -1;
    }
};