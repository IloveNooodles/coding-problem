class Solution {
public:
    string freqAlphabets(string s) {
        string decrypt = "";
        int size = s.size();
        for (int i = size - 1; i >= 0; i--) {
            string temp = "";
            int num = 0;
            if(s[i] == '#'){
                temp += s[i - 2];
                temp += s[i - 1];
                num = stoi(temp) - 1;
                decrypt += num + 'a';
                i -= 2;
                continue;
            }
            temp = s[i];
            num = stoi(temp) - 1;
            decrypt += num + 'a';
        }
        reverse(decrypt.begin(), decrypt.end());
        return decrypt;
    }
};
