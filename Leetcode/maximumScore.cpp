class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int size = cardPoints.size();
        int maxSum = 0;
        vector<int> frontSum(k + 1, 0);
        vector<int> backSum(k + 1, 0);
        
        for(int i = 1; i <= k; i++){
            frontSum[i] = frontSum[i - 1] + cardPoints[i - 1];
            backSum[i] = backSum[i - 1] + cardPoints[size - i];
        }
        
        int counter = 0;
        while(k >= 0){
            maxSum = max(maxSum, frontSum[k] + backSum[counter]);
            counter++;
            k--;
        }
        
        return maxSum;
    }
};
        
