class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(),  compare);
        int rowSize = boxTypes.size();
        int totalSum = 0;
        for(int i = 0; i < rowSize; i++){
            if(truckSize - boxTypes[i][0] < 0) {
                if(truckSize <= 0) break;
                totalSum += truckSize * boxTypes[i][1];
                break;
            }
            truckSize -= boxTypes[i][0];
            totalSum += boxTypes[i][0] * boxTypes[i][1];
        }
        return totalSum;
    }
    
    static bool compare(vector<int> v1, vector<int> v2){
        return v1[1] > v2[1];
    }
};
