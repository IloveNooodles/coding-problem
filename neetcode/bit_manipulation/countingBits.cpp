class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i <= n; i++){
            ans.push_back(countOne(i));
        }
        
        return ans;
    };

    int countOne(int n){
        int numOne = 0;
        while(n > 0){
            if(n % 2 == 1) numOne++;
            n = n/2;
        }
        return numOne;
    };
};
