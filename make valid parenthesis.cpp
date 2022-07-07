/*
 make valid parenthesis
Input: s = "lee(t(c)o)de)"
Output: "lee(t(c)o)de"
Explanation: "lee(t(co)de)" , "lee(t(c)ode)" would also be accepted.
*/ string minRemoveToMakeValid(string s) {
       stack<int>st;
    for(int i=0; i<s.size(); i++){
        if(s[i] == '('){
            st.push(i);
        }
        else{
            if(s[i] == ')'){
                if(st.empty()){
                    s[i] = '#';
                }
                else{
                    st.pop();
                }
            }
        }         
    }
    
    string ans = "";
    while(!st.empty()){
        s[st.top()] = '#';
        st.pop();
    }
    
    for(int i=0; i<s.size(); i++){
        if(s[i] != '#'){
            ans.push_back(s[i]);
        }
    }
        return ans;
    }
