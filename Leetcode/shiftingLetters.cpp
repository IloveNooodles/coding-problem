class Solution {
public:
    char shift(char input, long long shift) {
        int inputAsInteger = input - 'a';
        int shiftAmount = shift % 26;
        inputAsInteger = (inputAsInteger + shiftAmount) % 26;
        return inputAsInteger + 'a';
    }
    string shiftingLetters(string s, vector<int>& shifts) {
        string ans = "";
        int size = shifts.size();
        for(int i = 0; i < size; i++){
            ans[i] = shift(s[i], shifts[i]);
        }
        return ans;
    }
};
