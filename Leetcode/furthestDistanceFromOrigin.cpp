class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int l = 0, r = 0, x = 0;
        int size = moves.size();
        for(int i = 0; i < size; i++){
            switch(moves[i]){
                case 'L':
                    l++;
                    break;
                case 'R':
                    r++;
                    break;
                default:
                    x++;
                    break;
            }
        }

        return abs(l - r) + x;
    }
};
