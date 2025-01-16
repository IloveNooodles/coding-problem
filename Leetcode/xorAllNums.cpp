class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
       // a1, a2, a3
       // b1, b2, b3
       // a1 ^ b1, a1 ^ b2, a1 ^ b3
       // a2 ^ b1, a2 ^ b2, a2 ^ b3
       // a3 ^ b1, a3 ^ b2, a3 ^ b3
       //(a1 ^ a2 ^ a3) ^ b1
       //(a1 ^ a2 ^ a3) ^ b2
       //(a1 ^ a2 ^ a3) ^ b3
       //(a1 ^ a2 ^ a3 ^ b1 ^ b2 ^ b3)
       // a1, a2
       // b1, b2
       // (a1 ^ b1), (a1 ^ b2)
       // (a2 ^ b1), (a2 ^ b2)
       // a1, a2
       // b1, b2, b3
       // (a1 ^ b1), (a1 ^ b2), (a1 ^ b3)
       // (a2 ^ b1), (a2 ^ b2), (a2 ^ b3)
       // (a1 ^ a^2)
       int size1 = nums1.size();
       int size2 = nums2.size();
       int arr1xor = 0;
       int arr2xor = 0;
       for(int i = 0; i < size1; i++) {
            arr1xor ^= nums1[i];
       }

       for(int i = 0; i < size2; i++){
            arr2xor ^= nums2[i];
       }

       if(size1 % 2 == 0) arr2xor = 0;
       if(size2 % 2 == 0) arr1xor = 0;

       return arr1xor ^ arr2xor;
    }
};
