class Solution {
public:
    int minFlips(string s) {
        if(alternatingString(s)){
            return 0;
        }

        int size = s.size();
        s += s;
        // 010101
        // 101010
        string s1, s2;
        for(int i = 0; i < s.size(); i++){
            s1 += i % 2 ? '0' : '1';
            s2 += i % 2 ? '1' : '0';
        }

        int ans = INT_MAX;
        int ans1 = 0, ans2 = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != s1[i]) ans1++;
            if(s[i] != s2[i]) ans2++;
            // out of bounds
            // 10101010
            // 10101010
            // ^^^^^^^^
            //
            // 1|0101|010
            if(i >= size){
                if(s[i - size] != s1[i - size]) ans1--;
                if(s[i - size] != s2[i - size]) ans2--;

            }

            // match length
            if(i >= size - 1){
                ans = min({ans, ans1, ans2});
            }
        }

        return ans;
    }

    bool alternatingString(string s){
        for(int i = 0; i < s.size()-1; i++){
            if(s[i] == s[i+1]) return false;
        }

        return true;
    }
};
