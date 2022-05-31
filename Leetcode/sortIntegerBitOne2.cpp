class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [](int a, int b){
            int oneA = __builtin_popcount(a);
            int oneB = __builtin_popcount(b);

            if(oneA == oneB){
                return a < b;
            }

            return oneA < oneB;
        });
        return arr;
    }
    
//     static bool customSort(int a, int b){
//         int oneA = __builtin_popcount(a);
//         int oneB = __builtin_popcount(b);
        
//         if(oneA == oneB){
//             return a < b;
//         }
        
//         return oneA < oneB;
//     }

};
