class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> ans;
        int size = chars.size();
        int left = 0, right = 0;
        int counter = 0;
        while(left < size && right < size){
            if(chars[left] == chars[right]){
                counter++;
                right++;
            } else if(right == size - 1 || chars[left] != chars[right]){
                ans.push_back(chars[left]);
                if(counter > 1){
                    string toAdd = to_string(counter);
                    for(char x: toAdd){
                        ans.push_back(x);
                    }
                }
                counter = 0;
                left = right;
            }
        }

        if(chars[left] == chars[right - 1]){
            ans.push_back(chars[left]);
            if(counter > 1){
                string toAdd = to_string(counter);
                for(char x: toAdd){
                    ans.push_back(x);
                }
            }
        }

        chars = ans;
        return chars.size();
    }
};
