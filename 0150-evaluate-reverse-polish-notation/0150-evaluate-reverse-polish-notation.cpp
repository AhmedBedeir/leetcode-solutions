class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;
        long long val1;
        long long val2;
        for (int i = 0; i < tokens.size(); i++)
        {
          if (tokens[i] == "+")
          {      val1 = st.top();
                 st.pop();
                 val2 = st.top();
                 st.pop();
                st.push(val1 + val2);
          }         
           else if(tokens[i] == "-")
           {
               val1 = st.top();
                 st.pop();
               val2 = st.top();
                 st.pop();
                st.push(val2 - val1);
           }
                    
            else if (tokens[i] ==  "*")        
            {
                 val1 = st.top();
                 st.pop();
                 val2 = st.top();
                 st.pop();
                 st.push(val2 * val1);
            }
            else if (tokens[i] == "/")
            {
                val1 = st.top();
                st.pop();
                val2 = st.top();
                st.pop();
                st.push(val2 / val1);
            }
                    
            else
                st.push(stoi(tokens[i]));
        }
            
        return round(st.top());
    }
};