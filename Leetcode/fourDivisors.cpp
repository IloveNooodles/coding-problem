class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        // do prime factorization
        // add 1 and the number itself
        int size = nums.size();
        int ans = 0;
        for(int i = 0; i < size; i++){
            vector<int> f = factors(nums[i]);
            if(f.size() == 2){
                ans += (1 + f[0] + f[1] + nums[i]);
            }
        }

        return ans;
    }

    vector<int> factors(int num){
        set<int> temp;
        for(int i = 2; i * i <= num; i++){
            if(num % i == 0) {
                temp.insert(i);
                temp.insert(num/i);
            }
        }

        vector<int> ans(temp.begin(), temp.end());
        return ans;
    }
};
