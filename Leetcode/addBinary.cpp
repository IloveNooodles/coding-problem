class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int aSize = a.size() - 1;
        int bSize = b.size() - 1;
        int carry = 0;
        while(aSize >= 0 || bSize >= 0 || carry > 0) {
            int sum = carry;
            if(aSize >= 0) sum += a[aSize] - '0';
            if(bSize >= 0) sum += b[bSize] - '0';
            ans = char(sum % 2 + '0') + ans;
            carry = (sum / 2);
            aSize--;
            bSize--;
        }
        return ans;
    }
};
