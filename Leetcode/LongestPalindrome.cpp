class Solution {
public:
    int longestPalindrome(string s) {
        // odd -> 2 sama 1 beda terserah
        // even -> harus 2 sema
        int size = s.size();
        if(size == 1) return 1;

        map<char, int> m;
        for(int i = 0; i < size; i++){
            if(m.find(s[i]) == m.end()) m[s[i]] = 1;
            else m[s[i]]++;
        }
        int len = 0;
        for(auto key : m){
            len += (key.second / 2) * 2;
            //check if theres even and one odd then add one
            if(len % 2 == 0 && key.second % 2 == 1){
                len += 1;
            } 
        }
        return len;
    }
};
