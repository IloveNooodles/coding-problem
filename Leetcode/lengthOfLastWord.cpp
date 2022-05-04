class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = s.size();
        int counter = 0;
        for(int i = size - 1; i >= 0; i--){
            if(counter != 0 && s[i] == ' ') return counter;
            if(s[i] == ' ') continue;
            counter++;
        }
        return counter == 0 ? size : counter;
    }
};
