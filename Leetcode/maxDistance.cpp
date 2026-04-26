class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int size = colors.size();
        int left = 0, right = size - 1;
        int leftmost = colors[left], rightmost = colors[right];
        if(leftmost != rightmost) return size - 1;
        while(colors[right] == leftmost){
            right--;
        }

        while(colors[left] == rightmost){
            left++;
        }


        return max(abs(right), abs(size - 1 - left));
    }
};
