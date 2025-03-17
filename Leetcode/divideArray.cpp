class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map<int,int> m;
        for(int i = 0; i < 500; i++){
            m[i] = 0;
        }

        for(auto n : nums){
            m[n]++;
        }

        for(int i = 0; i < 500; i++){
            if(m[i] % 2 != 0) return false;
        }

        return true;
    }
};
