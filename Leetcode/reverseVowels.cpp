class Solution {
public:
    string reverseVowels(string s) {
        int len = s.size(), i = 0, j = len - 1;
        while(i < j){
            if(isVowel(s[i]) && isVowel(s[j])){
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;
            }

            if(!isVowel(s[i])){
                i++;
            }

            if(!isVowel(s[j])){
                j--;
            }
        }

        return s;
    }

    bool isVowel(char c){
        return (
            c == 'a' || c == 'A' || 
            c == 'i' || c == 'I' || 
            c == 'u' || c == 'U' ||
            c == 'e' || c == 'E' ||
            c == 'o' || c == 'O'
        );
    }
};
