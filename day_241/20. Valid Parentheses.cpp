class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(char c : s) {
            if(c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if(st.empty()) {
                    return false;
                }
                
                char temp = st.top();
                st.pop();
                
                if((c == ')' && temp != '(') || (c == '}' && temp != '{') || (c == ']' && temp != '[')) {
                    return false;
                }
            }
        }
        
        return st.empty();
    }
};
