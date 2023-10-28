#include<bits/stdc++.h> 
using namespace std; 

int main(int argc, char const *argv[])
{
    cout << "This is problem number 3: Search in 2D array" << endl; 
    // binary search implementation in 2D arrays 
     // love babber approach: 
    vector<vector<int>> matrix {{1,3,5,7},{10,11,16,20},{23,30,34,60}}; 
        int row = matrix.size(); 
        int col = matrix[0].size(); 
        int target = 0; 
        cout << "Enter the target element :" << endl; 
        cin >> target; 
        int start = 0;
        int end = row*col - 1; 
        int mid = start + (end - start)/2; 
            while(start <= end){
                int element = matrix[mid/col][mid%col]; // In this line i have used "%" operator beacuse the % in case of the divident less than divisor will give the number of the columns. but in senerio of the divisor operator the whole senerio is different. 
                    if(element == target){
                        cout << "element is found !" <<endl;
                        return 0;  
                    }

                    else if(element < target){
                        start = mid + 1; 
                    }

                    else{
                        end = mid - 1; 
                    }
                    mid = start + (end - start)/2;
            }     

            cout << "No target element is found !" << endl;    
            // the complexity of this solution is O(logN).

    cout << "Failure is the great and biggest teacher" << endl;   
    return 0;
}
