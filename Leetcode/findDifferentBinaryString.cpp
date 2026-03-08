class Solution {
public:
    unordered_set<string> generated;
    string findDifferentBinaryString(vector<string>& nums) {
        int size = nums.size();

        for(int i = 0; i < nums.size(); i++){
            generated.insert(nums[i]);
        }

        string res = "";
        return backtrack(res, size);
    }

    string backtrack(string& s, int size){
        if(s.size() == size){
            if(generated.find(s) == generated.end()) return s;
            return "";
        }

        // add 0
        s.push_back('0');
        if(backtrack(s, size) != "") return s;
        s.pop_back();

        // add 1
        s.push_back('1');
        if(backtrack(s, size) != "") return s;
        s.pop_back();

        return "";
    }

};
