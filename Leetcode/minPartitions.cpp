class Solution {
public:
    int minPartitions(string n) {
        int maxNumber = -1;
        int size = n.size();
        for(int i = 0; i < size; i++){
            maxNumber = max(maxNumber, n[i] - '0');
        }
        return maxNumber;
    }
};
