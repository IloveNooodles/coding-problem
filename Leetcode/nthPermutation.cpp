class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> res;
        int fact[9] = {1, 2, 6, 24, 120, 720, 5040, 40320, 3628800};
        for(int i = 1; i <= n; i++) res.push_back(i);
        string ans = "";
        while(n > 1){
            int currentDivisior = fact[n - 2];
            int index = k / currentDivisior;
            if(k % currentDivisior == 0) index--;
            k -= currentDivisior * index;
            ans += to_string(res[index]);
            res.erase(res.begin() + index);
            n--;
        }
        ans += to_string(res.back());
        return ans;
    }
};
