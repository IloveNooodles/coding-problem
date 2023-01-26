int solution(vector<int> &A) {
    // Implement your solution here
    int size = A.size();
    float minAvg = 999999;
    float avg;
    int minIdx = 0;
    // compute i+2th to i+3th neighbor
    for(int i = 0; i < size - 2; i++){
        // two slice
        avg = (float) (A[i] + A[i + 1])/2;
        if(avg < minAvg){
            minAvg = avg;
            minIdx = i;
        }

        // three slice
        avg = (float) (A[i] + A[i + 1] + A[i + 2]) / 3;
        if(avg < minAvg){
            minAvg = avg;
            minIdx = i;
        }
    }

    // compute last two
    if(minAvg > (float) (A[size - 1] + A[size - 2]) / 2) return size - 2;
    return minIdx;
}