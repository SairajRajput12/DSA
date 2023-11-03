class Solution {
public:
    int minSwaps(string str) {
        // A string is called balanced if:
        // 1) It is an empty string.
        // 2) It can be written as AB where A and B are both balanced strings or can be written as [C] where C is a balanced string.


    
    stack<char> s;
    for(int i=0; i<str.length(); i++) {
        char ch = str[i];
        
        if(ch == '[') 
            s.push(ch);
		else
        {
            //ch is closed brace
            if(!s.empty() && s.top() == '[') {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
    }
    
    if(s.size() == 0){
        return 0; 
    }
        //stack contains invalid expression
        // now i will just count the opening brackets from invalid string 
        // such that i will get the answer 
        int open = 0; 
        while(!s.empty()){
            char a = s.top(); 
            if(a == '['){
                open ++; 
            }
            s.pop(); 
        }

        int ans = (open + 1)/2; 
        return ans;
    }
};

