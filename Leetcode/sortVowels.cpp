class Solution {
public:
    string sortVowels(string s) {
        int freq[64] = {0};
        string vocal = "AEIOUaeiou";
        for(int i = 0; i < s.size(); i++){
            freq[s[i] - 'A']++;
        }

        string ans = "";
        int ptr = 0;
        for(int i = 0; i < s.size(); i++){
            char c = s[i];
            bool isVocal = false;
            for(int j = 0; j < vocal.size(); j++){
                if(c == vocal[j]){
                    isVocal = true;
                    break;
                }
            }

            if(isVocal){
                while(freq[vocal[ptr] - 'A'] == 0) ptr++;
                ans += vocal[ptr];
                freq[vocal[ptr]-'A']--;
            } else {
                ans += s[i];
            }
        }

        return ans;
    }
};
