class Solution {
public:
    int numSteps(string s) {
        int cnt = 0;
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            st.push(s[i]);
        }

        int carryOver = 0;
        while(st.size() != 1){
            int top = st.top() - '0';
            switch(top){
                case 0:
                    st.pop();
                    cnt++;
                    break;
                case 1:
                    int cnt0 = 0;
                    while(!st.empty() && (st.top() - '0') == 1){
                        cnt0++;
                        st.pop();
                    }

                    // if empty push else top + 1;
                    if(!st.empty()) {
                        st.pop();
                    } 
                    st.push('1');

                    for(int i = 0; i < cnt0; i++){
                        st.push('0');
                    }
                    cnt++;
                    break;
            }
        }

        cout << cnt << endl;
        if(carryOver == 1) cnt++;
        return cnt;
    }
    //1: 1 -> 1 = 0
    //2: 10 -> 1 = 1 | len 2, 1: 1, genap
    //3: 11 -> 100 -> 10 -> 1 = 3 | len 2, 1:2, ganjil
    //4: 100 -> 10 -> 1 = 2 | len 3, 1:1, genap
    //5: 101 -> 110 -> 11 -> 100 -> 10 -> 1 = 5 | len 3, 1: 2, ganjil
    //6: 110 -> 1 = 4 | len 3, 1:2 genap
    //7: 111 -> 1000 -> 100 -> 10 -> 1 = 4
    //8: 
};
