class Solution {
public:
    string removeOccurrences(string s, string part) {
        int left = 0;
        int size = s.size();
        int partSize = part.size();
        while(left < size){
            int ptr = 0;
            int adder = 0;
            if(s[left] != part[ptr]) {
                left++;
                continue;
            }
            while(ptr < partSize){
                if(s[left + ptr + adder] == '1') {
                    adder++;
                    continue;
                }
                if(s[left + ptr + adder] != part[ptr]){
                    ptr = 0;
                    break;
                }
                ptr++;
            }

            if(ptr >= partSize) {
                for(int i = 0; i < partSize + adder; i++){
                    s[left + i] = '1';
                }

                left = 0;
            } else {
                left++;
            }
        }

        string ans = "";
        for(int i = 0; i < size; i++){
            if(s[i] != '1') ans += s[i];
        }

        return ans;
    }
};
