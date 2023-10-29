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
            cerr << "Error: stack overflow has occured" << endl; 
            return; 
        }
    }

    char pop() {
        // Check for underflow condition
        if (top == -1) {
            // It's an underflow condition 
            cerr << "Error: stack undeflow has occured" << endl; 
            return -1;
        } else {
            char e = arr[top];
            top--;
            return e;
        }
    }

    bool isEmpty() {
        return top == -1;
    }

    char peek() {
        return arr[top];
    }
};

class Solution {
public:
    bool check(Stack &s, char a) {
        if (!s.isEmpty()) {
            char top = s.peek();
            if ((a == '}' && top == '{') || (a == ')' && top == '(') || (a == ']' && top == '[')) {
                s.pop();
                return true;
            } else {
                return false;
            }
        }
        return false; // when stack is empty
    }

    bool isValid(string s) {
        Stack m(s.size());
        for (int i = 0; i < s.size(); i++) {
            char a = s[i];
            if (a == '(' || a == '{' || a == '[') {
                m.push(a);
            } else {
                // A closing bracket is encountered
                bool res = check(m, a);
                if (!res) {
                    return false;
                }
            }
        }

        if (m.isEmpty()) {
            return true;
        } else {
            return false;
        }
    }
};
