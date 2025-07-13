class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int playerSize = players.size();
        int trainerSize = trainers.size();
        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        int cnt = 0;
        int firstHighest = 0;
        int highest = trainerSize - 1;

        for(int i = playerSize - 1; i >= 0 && highest >= 0; i--){
            if(players[i] > trainers[highest]) continue;
            cnt++;
            highest--;
        }

        return cnt;
    }
};
