class Solution {
public:
    int maxArea(vector<int>& height) {
        int bestSum = 0;
        int size = height.size();
        int i = 0, j = size - 1;

        int sum, minH;
        while(i < j){
            minH = min(height[i], height[j]);
            sum = minH * abs(i - j);
            bestSum = max(bestSum, sum);
            if(height[i] > height[j]){
                j--;
            } else {
                i++;
            }
        }

        return bestSum;
    }
};
