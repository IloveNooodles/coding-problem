class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carryOver = 0;
        int curr;
        int size = digits.size();
        for(int i = size - 1; i >= 0; i--){
            curr = digits[i];
            if(i == size - 1) curr += 1;
            if(carryOver != 0 && i != size - 1){
                curr += carryOver;
            }
            carryOver = curr / 10;

            digits[i] = curr % 10; 
        }
        vector<int> ans;
        if(carryOver != 0){
            ans.push_back(carryOver);
        }

        for(int i = 0; i < size; i++){
            ans.push_back(digits[i]);
        }

        return ans;
    }
};
