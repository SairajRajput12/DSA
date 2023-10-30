#include<stack>

#include <iostream>
#include <string>

class Stack {
public:
    int top;
    char *arr;
    int size;

    Stack(int size) {
        top = -1;
        this->size = size;
        arr = new char[size];
    }

    void push(char data) {
        // First, check for overflow condition
        if (top < size - 1) {
            top++;
            arr[top] = data;
        } else {
            // Overflow has occurred
            std::cerr << "Error: stack overflow has occurred" << std::endl;
            return;
        }
    }

    void pop() {
        // Check for underflow condition
        if (top == -1) {
            // It's an underflow condition
            std::cerr << "Error: stack underflow has occurred" << std::endl;
            return;
        } else {
            top--;
        }
    }

    bool isEmpty() {
        return top == -1;
    }

    char peek() {
        if (top != -1) {
            return arr[top];
        }
        // Handle the case when the stack is empty
        std::cerr << "Error: stack is empty" << std::endl;
        return '\0'; // Return a sentinel value
    }
};

bool evaluate(Stack &evaluator, char a) {
    bool response = true;

    while (evaluator.peek() != '(') {
        char top = evaluator.peek();
        if (top == '+' || top == '-' || top == '*' || top == '/') {
            response = false;
        }
        evaluator.pop();
    }

    if (response == true) { // Pop the '(' 
        return true; 
    }
    evaluator.pop(); 
    return response;
}

bool findRedundantBrackets(std::string &s) {
    Stack evaluator(s.size());
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            evaluator.push(s[i]);
        } else if (s[i] == ')') {
            bool response = evaluate(evaluator, s[i]);
            if (response == true) {
                return true;
            }
        }
    }

    return false;
}

