class Solution {
public:
    vector<string> list;
    string getHappyString(int n, int k) {
        generate("a", n - 1);
        generate("b", n - 1);
        generate("c", n - 1);

        // for(int i = 0; i < list.size(); i++){
        //     cout << list[i] << endl;
        // }

        if(k > list.size()) return "";
        return list[k - 1];
    };

    string generate(string ans, int n){
        if(n == 0){
            list.push_back(ans);
            return "";
        }

        int size = ans.size();
        char chars[3] = {'a', 'b', 'c'};
        for(const auto c : chars){
            if(c == ans[size - 1]) continue;
            generate(ans + c, n - 1);
        }

        return "";
    }
};
