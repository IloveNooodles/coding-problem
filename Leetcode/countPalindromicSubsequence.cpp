class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int size = s.size();
        vector<bool> seen(26);
        vector<int> firstOccur(27, -1), lastOccur(27, -1);
        for(int i = 0; i < size; i++){
            int curChar = s[i] - 'a';
            if(!seen[curChar]){
                firstOccur[curChar] = i;
            }  
            lastOccur[curChar] = i;
            seen[curChar] = true;
        }

        int ans = 0;
        for(int i = 0; i < 26; i++){
            int first = firstOccur[i], last = lastOccur[i];
            if(first  == -1 || last == -1) continue;
            int ptr = first + 1;
            set<char> uniq;
            while(ptr < last){
                uniq.insert(s[ptr]);
                ptr++;
            }
            
            ans += uniq.size();
        }
        
        return ans;
    }
};
