class Solution {
public:
    int countBinarySubstrings(string s) {
        int size = s.size();
        int counter = 0;
        vector<int> groups(size, 0);
        groups[0] = 1;
        for(int i = 0; i < size - 1; i++){
            if(s[i] != s[i+1]){
                groups[++counter]++;
            } else {
                groups[counter]++;
            }
        }

        int ans = 0;
        for(int i = 0; i < counter; i++){
            ans += min(groups[i], groups[i + 1]);
        }

        return ans;
    }
};
