class Solution {
vector<string> ans;
public:
    vector<string> generateParenthesis(int n) {
        generate("", 0, 0, n);
        return ans;
    }

    void generate(string s, int left, int right, int n){
        if(s.size() == 2 * n){
            ans.push_back(s);
            return;
        }

        if(left < n){
            generate(s + "(", left + 1, right, n);
        }

        if(right < left){
            generate(s + ")", left, right + 1, n);
        }
    }
};
