class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> number;
        int size = tokens.size();
        for(int i = 0; i < size; i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/"){
                int op2 = std::stoi(number.top());
                number.pop();
                int op1 = std::stoi(number.top());
                number.pop();
                int res;
                if(tokens[i] == "+"){
                    res = op1 + op2; 
                } else if (tokens[i] == "-") {
                    res = op1 - op2;
                } else if (tokens[i] == "*"){
                    res = op1 * op2;
                } else {
                    res = op1 / op2;
                }
                number.push(to_string(res));
            } else {
                number.push(tokens[i]);
            }
        }

        return std::stoi(number.top());
    }
};
