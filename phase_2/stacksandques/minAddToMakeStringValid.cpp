class Solution { 
public:
    int minAddToMakeValid(string str) {
    //  if(str.length()%2 == 1) {
    //     return -1;
    // }
    
    stack<char> s;
    for(int i=0; i<str.length(); i++) {
        char ch = str[i];
        
        if(ch == '(') 
            s.push(ch);
		else
        {
            //ch is closed brace
            if(!s.empty() && s.top() == '(') {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
    }     
	return s.size(); 
    }
};
