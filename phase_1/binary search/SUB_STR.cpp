#include <iostream>
using namespace std;

// Function to extract a sub-array from the given string
char* setArray(string Str, int Lq, int Rq){
    char* returnedCharArray = new char[Rq - Lq + 1]; // Allocate memory on heap
    int index = 0; 
    for(int i = (Lq - 1); i < Rq; i ++){
        returnedCharArray[index] = Str[i]; 
        // cout << returnedCharArray[index] << " ";  // Debugging statement
        index ++; 
    }
    // cout << endl;  // Debugging statement   
    return returnedCharArray; 
}

int main() {
    int testCases; 
    cin >> testCases;  
    int Strlength, givenInteger, query;  
    string Str; 
    while(testCases --){
        cin >> Strlength >> givenInteger >> query; 
        cin >> Str; 
        for (int i = 0; i < query; i++) {
            int Lq, Rq; 
            cin >> Lq >> Rq; 
            int countZeros = 0, countOne = 0;
            char* charArray = setArray(Str, Lq, Rq); 
            int combination = (Rq - Lq + 1)*(Rq - Lq + 2)/2; 
            // cout << "Lq :" << Lq << " "<<" Rq :"<< Rq << " " << "combination :" << combination << endl;  // Debugging statement
            int n = 0; 
            while(n < (Rq-Lq+1)){
                if(charArray[n] == '1'){
                    countOne ++; 
                    if(countOne > givenInteger){
                        combination -= (n+1); // subtract the number of invalid substrings
                        break; // we can stop checking further as there won't be any valid substring after this position
                    }      
                } else if(charArray[n] == '0'){
                    countZeros ++; 
                    if(countZeros > givenInteger){
                        combination -= (n+1); // subtract the number of invalid substrings
                        break; // we can stop checking further as there won't be any valid substring after this position
                    }      
                }
                n ++; 
                // cout << "countzeros :" << countZeros <<" " << countOne <<" "<< endl;  // Debugging statement
            }
            cout << combination <<  endl;     
            delete[] charArray; // Free memory allocated by setArray function
        }
    }
    return 0;
}
