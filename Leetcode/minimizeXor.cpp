class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int num1Clone = num1;
        int num2Clone = num2;
        int num1bitlen = 0;
        int num2bitlen = 0;
        int num1ones = 0;
        int num2ones = 0;
        while(num1Clone > 0){
            num1ones += num1Clone & 1;
            num1bitlen++;
            num1Clone /= 2;
        }

        while(num2Clone > 0){
            num2ones += num2Clone & 1;
            num2bitlen++;
            num2Clone /=2;
        }
        int differences = num2ones - num1ones;
        if(differences == 0) return num1;
        // if num1 > num2;
        // 1100, 0001
        // 1000
        if(differences < 0){
            int ans = num1;
            int i = differences;
            int selisih = 0;
            while(i < 0){
                if(ans & 1) {
                    i++;
                }
                ans = ans >> 1;
                selisih++;
            }
            ans <<= selisih;
            return ans;
        }

        //001, 011
        //1010100, 11111 
        //1110000

        for(int i = 0; i < 31; i++){
            int adder = (1 << i);
            if((num1 & adder) == 0) {
                differences--;
                num1 |= adder;
            }

            if(differences <= 0) break;
        }

        return num1;
    }
};
