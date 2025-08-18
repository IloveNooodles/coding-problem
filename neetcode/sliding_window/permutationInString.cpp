class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int size1 = s1.size();
        int size2 = s2.size();
        if(size1 > size2) {
            checkInclusion(s2, s1);
        }

        // ensure s1 is the smalest
        int s1map[26] = {0};
        int s2map[26] = {0};
        for(int i = 0; i < size1; i++){
            s1map[s1[i]-'a']++;
        }

        int left = 0, right = 0;
        while(left < size2 && right < size2){
            s2map[s2[right]-'a']++;
            bool allSame = true;
            for(int i = 0; i < 26; i++){
                if(s1map[i] != s2map[i]) {
                    allSame = false;
                    break;
                }
            }
            if(allSame) return true;
            
            right++;
            if(right - left + 1 > size1) {
                s2map[s2[left] - 'a']--;
                left++;
            }
            //cout << left << " " << right << endl;
        }

        return false;
    }
};
