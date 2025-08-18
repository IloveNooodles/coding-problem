class Solution {
public:
    string minWindow(string s, string t) {
        int sSize = s.size(), tSize = t.size();
        map<char, int> tFreq, sFreq;

        for(int i = 0; i < tSize; i++){
            tFreq[t[i]]++;
            sFreq[t[i]]=0;
        } 

        int left = 0, right = 0;
        string ans = "";
        int startIdx = -1, length = INT_MAX;
        while(left < sSize && right < sSize){
            sFreq[s[right]]++;
    
            bool enough = true;
            for(auto &x : tFreq){
                if(sFreq[x.first] < x.second) enough = false;
            }

            while(enough){
                for(auto &x : tFreq){
                    //cout << x.first << " count: " << x.second << " vs " << sFreq[x.first] << "\n";
                    if(sFreq[x.first] < x.second) {
                        enough = false;
                        break;
                    }
                }

                if(!enough) break;
                //cout << "tamat\n";
                int curLength = right - left + 1;
                if(curLength < length){
                    startIdx = left;
                    length = curLength;
                    //cout << startIdx << " " << length << " updated\n";
                }

                sFreq[s[left]]--;
                left++;
            }

            right++;
        }


        //cout << startIdx << " " << length;
        if(startIdx == -1) return "";
        return s.substr(startIdx, length);
    }
};
