class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans(digits);
        reverse(ans.begin(), ans.end());

        int size = digits.size();
        int remainder = 0;

        for(int i = 0; i < size; i++){
            int num = i == 0 ? ans[i] + 1 : ans[i] + remainder;
            ans[i] = num % 10;
            remainder = num / 10;
        }

        if(remainder == 1){
            ans.push_back(1);
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
