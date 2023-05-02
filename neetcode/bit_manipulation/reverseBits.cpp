class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        int BIT_LENGTH = 31;
        int i = 0;
        for(int i = 0; i <= BIT_LENGTH; i++){
            int rightIthBit = (n >> i) & 1;
            result = result | (rightIthBit << (BIT_LENGTH - i));
        }

        return result;
    }
};
