class Solution {
public:
    string interpret(string command) {
        string ans = "";
        int size = command.size();
        for(int i = 0; i < size; i++) {
            cout << command[i] << " ";
            if(command[i] == 'G') {
                ans += 'G';
                continue;
            }
            if(command[i] == '(' && command[i + 1] == ')') {
                ans += 'o';
                i++;
            }
            else{
                ans += "al";
                i += 3;
            } 
        }
        return ans;
    }
};
