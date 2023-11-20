#include <iostream>
#include <map>
#include <stack>
using namespace std;

bool isOperand(char ch){
    if(ch - 'a' >= 0 && ch - 'a' <= 25){
        return true;
    }
    else if(ch - '0' >= 0 && ch - '0' <= 9){
        return true;
    }
    else{
        return false;
    }
}


string infixToPostfix(string exp) {
	// approach 1: catch in this code is that this code works when i decleared the expression without opening and closing brackets. 
    stack<char> operators;
    string ans;
    map<char, int> precedence;
    precedence['+'] = 1;
    precedence['-'] = 1;
    precedence['*'] = 2;
    precedence['/'] = 2;
    precedence['^'] = 3;
    precedence['('] = 0;
    precedence[')'] = 0;

    for (int i = 0; i < exp.size(); i++) {
        char curr = exp[i];
        if (curr == '+' || curr == '-' || curr == '*' || curr == '/' || curr == '(' || curr == ')' || curr == '^') {
             // first remove the lower precedence operator from the stack 
             if(curr == '('){
                 operators.push(exp[i]); 
             }
             else if(curr == ')'){
                 while(operators.top() != '('){
                     ans += operators.top(); 
                     operators.pop(); 
                 }
                 operators.pop(); 
             }
             else{
                 while(!operators.empty() && precedence[curr] <= precedence[operators.top()]){
                     ans += operators.top(); 
                     operators.pop();                     
                 }  
                 operators.push(curr); 
             } 
         }
         else {
              // means they are operand 
              ans += curr;
         }
    } 

    while (!operators.empty()) {
        char op = operators.top();
        operators.pop();
        ans = ans + op;
    }

    return ans;

	// approach 2: 
	// map<char, int> precedence;
    // precedence['*'] = 2;
    // precedence['/'] = 2;
    // precedence['+'] = 1;
    // precedence['-'] = 1;
    // precedence['^'] = 3;
    // precedence['('] = 0;
    // precedence[')'] = 0;
    // stack <char> st; 
    // string ans = ""; 
    // for(int i = 0; i < exp.size(); i ++){
    //     if(isOperand(exp[i])){
    //         // is it operand 
    //         ans += exp[i]; 
    //     }
    //     else if(exp[i] == '('){
    //         // it is opening bracket 
    //         st.push(exp[i]); 
    //     }
    //     else if(exp[i] == ')'){
    //         // it is closing brackets 
    //         while(st.top() != '('){
    //             ans += st.top(); 
    //             st.pop(); 
    //         }
    //         st.pop(); 
    //     }
    //     else {
    //         // if it is operator 
    //         while(!st.empty() && precedence[exp[i]] <= precedence[st.top()]){
    //             ans += st.top(); 
    //             st.pop(); 
    //         }
    //         st.push(exp[i]);
    //     }
    // }

    // while(!st.empty()){
    //     ans += st.top(); 
    //     st.pop(); 
    // }
    // return ans;
}

string infixToPrefix(string str){
	string result = ""; 
	for(int i = str.size()-1; i >= 0; i -- ){
		result += str[i]; 
	}
	
	for(int i = 0; i < str.size(); i ++){
		if(result[i] == '('){
			result[i] = ')';
		}
		else if(result[i] == ')'){
			result[i] = '('; 
		}
	}
	
	string postString = infixToPostfix(result); 
	for(int i = postString.size()-1; i >= 0; i -- ){
		result[i] = postString[postString.size()-1-i]; 
	}
	return result; 
}
	
	
int main() {
    string infixExpression;
    
    // Input infix expression
    cout << "Enter an infix expression: ";
    getline(cin, infixExpression);
    
    // Convert to postfix
    string postfixExpression = infixToPostfix(infixExpression);
    cout << "Postfix expression: " << postfixExpression << endl;
    
    // Convert to prefix
    string prefixExpression = infixToPrefix(infixExpression);
    cout << "Prefix expression: " << prefixExpression << endl;

    return 0;
}

