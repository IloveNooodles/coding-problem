class Solution {
public:
    int binaryGap(int n) {
        int start = 0;
        int ans = 0;
        int end = 0;
        int oneCnt = 0;
        while(n > 0){
            int leftMostBit = (n & 1);
            // cout << "current: " << leftMostBit << endl;
            if(leftMostBit){
                if(oneCnt > 0){
                    ans = max(ans, end - start);
                }
                start = end;
                oneCnt++;
            }

            end++;
            n /= 2;
        }
        //1100
        //

        return oneCnt == 1 ? 0 : ans;
    }
};
