class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> s;
        int size = tokens.size();
        for(int i = 0; i < size; i++){
            if(isValidOp(tokens[i])){
                int num2 = stoi(s.top()); s.pop();
                int num1 = stoi(s.top()); s.pop();
                int result = calculate(num1, num2, tokens[i]);
                s.push(to_string(result));
                continue;
            }

            s.push(tokens[i]);
        }

        return stoi(s.top());
    }

    bool isValidOp(string input){
        return input == "+" || input == "*" || input == "/" || input == "-";
    }

    int calculate(int num1, int num2, string op){
        if(op == "+") return num1 + num2;
        if(op == "*") return num1 * num2;
        if(op == "-") return num1 - num2;
        return num1 / num2;
    }
};
