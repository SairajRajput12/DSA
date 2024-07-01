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
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int size = 10;
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
         printArray(arr,size); 
    return 0;
}