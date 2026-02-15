class Solution {
public:
    string addBinary(string a, string b) {
        int bz = b.size();
        int az = a.size();
        int maximum = max(az, bz);

        string aPad = "", bPad = "";
        for(int i = 0; i < maximum - az; i++){
            aPad += "0";
        }
        aPad += a;

        for(int i = 0; i < maximum - bz; i++){
            bPad += "0";
        }
        bPad += b;

        stack<char> res;
        char carryover = 0;
        for(int i = maximum; i >= 0; i--){
            int temp = (aPad[i] - '0') + (bPad[i] - '0') + carryover;
            switch(temp){
                case 0:
                case 1:
                    res.push(temp + '0');
                    carryover = 0;
                    break;
                case 2:
                case 3:
                    res.push((temp % 2) + '0');
                    carryover = 1;
                    break;
                default:
                    break;
            }
        }

        if(carryover == 1) res.push('1');
        string ans;
        while(!res.empty()){
            ans += res.top();
            res.pop();
        }
        return ans;
    }
};
