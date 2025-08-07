class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size(), size2 = nums2.size();
        if(size1 > size2) return findMedianSortedArrays(nums2, nums1);

        int totalSize = size1 + size2, partition = totalSize / 2;
        int l = 0, r = size1;
        while(l <= r){
            int partitionLeft = l + (r - l)/2;
            int partitionRight = partition - partitionLeft;
            
            int left1 = partitionLeft > 0 ? nums1[partitionLeft - 1] : INT_MIN;
            int right1 = partitionLeft < size1 ? nums1[partitionLeft] : INT_MAX;

            int left2 = partitionRight > 0 ? nums2[partitionRight - 1] : INT_MIN; 
            int right2 = partitionRight < size2 ? nums2[partitionRight] : INT_MAX; 

            if(left1 <= right2 && left2 <= right1){
                int isOdd = totalSize % 2 == 1;
                if(isOdd) return min(right1, right2);
                else return (max(left1, left2) + min(right1, right2))/2.0;
            } else if(left1 > right2) {
                r = partitionLeft - 1;
            } else {
                l = partitionLeft + 1;
            }
        }

        return 0;
    }
};
