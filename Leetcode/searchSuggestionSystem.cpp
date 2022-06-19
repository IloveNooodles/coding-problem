class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(), products.end());
        vector<vector<string>> res;
        int start, bsStart = 0, size = products.size();
        
        string prefix;
        for (char& c : searchWord) {
            prefix += c;
            start = lower_bound(products.begin() + bsStart, products.end(), prefix) - products.begin();
            
            res.push_back({});
            
            for(int i = start; i < min(start + 3, size) && !products[i].compare(0, prefix.length(), prefix); i++) {
                res.back().push_back(products[i]);
            }
            
            bsStart = start;
        }
        return res;
    }
};
