class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.begin(), piles.end());
        long long left = 1;
        long long right = 1e9;
        long long size = piles.size();
        while(left < right){
            int middle = left + (right - left)/2;
            long long avg = 0;
            for(long long i = 0; i < size; i++){
                avg += (piles[i] + middle - 1)/middle;
            }

            if(avg <= h) {
                right = middle;
            } else {
                left = middle + 1;
            }
        }
        return left;
    }
};

//3, 4, 5, 6, 7, 8, 9, 10, 11
//3, 6, 7, 11
//speed = 7;
//1st -> 3, 11 -> speed 7. -> 5 <= 8; middle;
//2st -> 3, 6 -> speed 4 -> 8 <= 8; masi ok right = middle - 1;
//3st -> 3, 3
