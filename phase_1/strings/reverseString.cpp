class Stack{
public: 
int top; 
char *arr; 
int size; 
// here in this code we require only 2 operations pop and push
    Stack(int size){
        top = -1; 
        this -> size = size; 
        arr = new char[size];
    }
    void push(char data){
        // first check the overflow condition 
        if(size - top > 1){
            top ++; 
            arr[top] = data; 
            return; 
        }
        else{
            // overflow has occured 
            return; 
        }
    }

    char pop(){
        // check the underflow condition 
        if(top == -1){
            // it is underflow condition 
            return -1; 
        }
        else{
            char e = arr[top]; 
            top --; 
            return e; 
        }
    }
};

class Solution {
public:
    // approach 1: using recursion. 
    // void manipulate(vector<char>& s,int start,int end){
    //     if(start >= end){
    //         return;
    //     }
    //     swap(s[start],s[end]); 
    //     manipulate(s,start+1,end-1); 
    // }

    // void manipulate(vector<char>& s,int start){
    //     if(start >= (s.size()/2)){
    //         return;
    //     }
    //     swap(s[start],s[s.size()-start-1]); 
    //     manipulate(s,start+1); 
    // }


    // void reverseString(vector<char>& s) {
    //     // 2 pointer approach 
    //     int i = 0; 
    //     int n = s.size() - 1; 
    //     // while(i < n){
    //     //     swap(s[i],s[n]);
    //     //     i ++; 
    //     //     n --; 
    //     // }

    //     // using recursion: 
    //     // manipulate(s,i,n); // -> 76% beats 
    //     manipulate(s,i); // -> 76% beats
    // }

    // approach 3: using stack
    void reverseString(vector<char>& s) {
        Stack st(s.size()); 
        for(int i = 0; i < s.size(); i ++){
            char a = s[i];  
            st.push(a); 
        }

        // now stack will have o l l e h 
        for(int i = 0; i < s.size(); i ++){
            char a = st.pop(); 
            s[i] = a; 
        }
    }
};
