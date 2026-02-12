class Solution {
public:
    int longestBalanced(string s) {
        int size = s.size();
        int freq[26] = {0};
        set<char> chars;

        for(int i = 0; i < s.size(); i++){
            chars.insert(s[i]);
        }

        int ans = 0;

        for(int i = 0; i < size; i++){
            for(int i = 0; i < 26; i++){
                freq[i] = 0;
            }

            for(int j = i; j < size; j++){
                bool first = true;
                int balanced = 0;
                bool valid = true;
                freq[s[j] - 'a']++;
                for(auto x : chars){
                    int f = freq[x-'a'];
                    // cout << x << " " << f << endl;
                    if(f == 0) continue;
                    if(first) {
                        balanced = f;
                        first = false;
                        continue;
                    }

                    if(f != balanced){
                        valid = false;
                        break;
                    }
                }

                if(valid){
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};
