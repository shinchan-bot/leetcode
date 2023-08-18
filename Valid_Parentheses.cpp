#include<stack>

class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        for(int i=0; i<s.length(); i++){
            switch(s[i]){
                case '(':
                    brackets.push(s[i]);
                    break;
                case '[':
                    brackets.push(s[i]);
                    break;
                case '{':
                    brackets.push(s[i]);
                    break;
                case ')':
                    if(!brackets.empty() && brackets.top() == '('){
                        brackets.pop();
                    }else{
                        brackets.push(s[i]);
                    }
                    break;
                case ']':
                    if(!brackets.empty() && brackets.top() == '['){
                        brackets.pop();
                    }else{
                        brackets.push(s[i]);
                    }
                    break;
                case '}':
                    if(!brackets.empty() && brackets.top() == '{'){
                        brackets.pop();
                    }else{
                        brackets.push(s[i]);
                    }
                    break;
            }
        }
        if(brackets.empty()){
            return true;
        }
        return false;
    }
};
