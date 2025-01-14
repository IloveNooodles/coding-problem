class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans; 
        int size = A.size();
        int freqA[64] = {0}, freqB[64]= {0};
        for(int i = 0; i < size; i++){
            freqA[A[i]]++; 
            freqB[B[i]]++;
            int cur = 0;
            for(int i = 1; i <= 50; i++){
                if(freqA[i] == freqB[i] && freqA[i] == 1) cur++;
            }
            ans.push_back(cur);
        }

        return ans;
    }
};
