class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mapNext;
        int size = nums2.size();
        for(int i = 0; i < size; i++){
            mapNext[nums2[i]] = i;
        }
        vector<int> ans;
        int size2 = nums1.size();
        for (int i = 0; i < size2; i++) {
            int startIdx = mapNext[nums1[i]];
            bool found = false;
            for (startIdx; startIdx < size; startIdx++) {
                if(startIdx + 1 < size && nums2[startIdx + 1] > nums1[i]) {
                    ans.push_back(nums2[startIdx+1]);
                    found = true;
                    break;
                }
            }
            
            if(!found) ans.push_back(-1);
        }
        
        return ans;
    }
};
