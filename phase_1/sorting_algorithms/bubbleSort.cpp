#include <iostream>
using namespace std;

void printArray(int arr[] , int size) 
{
    for(int i = 0; i < size; i ++)
            {
                  cout << arr[i]<<" ";
            }
        cout << endl;     
}

int main()
{
    int arr[] = {7, 1, 6, 9};
    int n = 4;
    /*
    for (int i = 1; i < size; i++)
    {
        // processing all elements
        for (int j = 0 ; j < (size -i) ; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        printArray(arr,size); 

        }
    }
    */ 
    
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }

         printArray(arr,n); 
    return 0;
}
