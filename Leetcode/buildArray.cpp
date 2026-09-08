class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
       vector<string> ans;
       vector<int> build(n, 0);
       for(int i = 0; i < n; i++) build[i] = i+1;
       int i = 0, j = 0;
       while(j != target.size()){
            if(build[i] == target[j]){
                ans.push_back("Push");
                i++; j++;
            } else {
                ans.push_back("Push");
                ans.push_back("Pop");
                i++;
            }
       }

       return ans;
    }
};
