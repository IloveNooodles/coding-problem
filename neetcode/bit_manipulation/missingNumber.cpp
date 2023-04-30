// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         int size = nums.size();
//         for(int i = 0; i < size ; i++){
//             if(nums[i] != i) return i;
//         }

//         return size;
//     }
// };

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int ans = size;
        for(int i = 0; i < size ; i++){
            ans ^= i ^ nums[i];
        }

        return ans;
    }
