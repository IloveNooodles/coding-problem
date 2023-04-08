class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int maxLen = 1;
        int size = s.size();
        for(int i = 0; i < size - 1; i++){
            expand(s, i, i, maxLen, start); // expand odd
            expand(s, i, i + 1, maxLen, start); //expand even
        }

        return s.substr(start, maxLen);
    }
private:
    void expand(string s, int start, int end, int &maxLen, int &maxStart){
        int len = s.size();
        //start expanding
        while(start >= 0 && end <= len - 1 && s[start] == s[end]){
            start--;
            end++;
        }

        //if the window is bigger than maxlen
        // window: end - start + 1;
        // (end - 1) - (start + 1) + 1
        //  emd - start - 1
        int currentWindow = end - start - 1;
        if(currentWindow > maxLen){
            maxStart = start + 1;
            maxLen = currentWindow;
        }
    }
};
