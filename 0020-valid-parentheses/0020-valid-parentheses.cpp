class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto it:s){
            if(it=='(' || it=='{' || it=='['){
                st.push(it);
            }
            
            else if((it==')' || it==']' || it=='}') && st.empty()) return false ;
            else if(!st.empty()){
            if(it ==')'){
              if (st.top()!='(' )
                return false; 
                  
                else st.pop();
            }  
                
            else if(it =='}'){
              if (st.top()!='{')
                return false; 
                  
                else st.pop();
            
        }
          else if(it ==']'){
              if (st.top()!='[')
                return false; 
                  
                else st.pop();
            
        }
            }
        }
        if(!st.empty()) return false;
        return true;
        
    }
};