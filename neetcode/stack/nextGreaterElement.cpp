class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();

        vector<int> res;
        stack<int> s;
        map<int, int> m;
        // 3,2,1,4
        // s -> 3
        // 3 < 2 -> do nothing; 3, 2
        // 1 < 2 -> do nothing; 3, 2, 1
        // 4 > 1 -> m[1] = 4; m[2] = 4; m[3] = 4; 
        // Create hashmap 
        for(int i = 0; i < size2; i++){
            m[nums2[i]] = -1;
        }

        //create strictly decrease monotonic stack
        for(int i = 0; i < size2; i++){
            while(!s.empty() && s.top() < nums2[i]){
                int top = s.top(); s.pop();
                m[top] = nums2[i];
            }

            s.push(nums2[i]);
        }

        for(int i = 0; i < size1; i++){
            res.push_back(m[nums1[i]]);
        }

        return res;
    }
};
