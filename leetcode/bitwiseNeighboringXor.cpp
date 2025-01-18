class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int size = derived.size();
        int xorNumber = 0;
        for(int i = 0; i < size; i++){
            xorNumber ^= derived[i];
        }
        
        if(xorNumber == 1) return false;
        return true;
    }
};
