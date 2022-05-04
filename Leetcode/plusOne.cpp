class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        int carry = 0;
        vector<int> ans;
        for(int i = size - 1; i >= 0; i--) {
            if(i == size - 1) {
                digits[i] += 1;
                if(digits[i] >= 10){
                    carry = 1;
                    digits[i] = 0;
                    
                }
                ans.push_back(digits[i]);
                continue;
            }
            digits[i] += carry;
            if(digits[i] >= 10){
                digits[i] = 0;
                carry = 1;
            } else {
                carry = 0;
            }
            ans.push_back(digits[i]);
        }
        if(carry == 1) ans.push_back(1);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
