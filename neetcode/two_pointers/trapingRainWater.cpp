class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        int left = 0;
        int right = size - 1;
        int ans = 0;

        int bestRight = height[right];
        int bestLeft = height[left];

        while(left < right){
            if(bestLeft <= bestRight){
                left++;
                bestLeft = max(bestLeft, height[left]);
                ans += abs(bestLeft - height[left]);
            } else {
                right--;
                bestRight = max(bestRight, height[right]);
                ans += abs(bestRight - height[right]);
            }
        }
        return ans;
    }
};
