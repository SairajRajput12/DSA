#include <bits/stdc++.h>

using namespace std;

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    cout << "This is tutorial number: Selection sort  " << endl;
    int arr[] = {64, 25, 12, 22, 11};
    int size;
    // cout << "Enter the size of the element :"<<endl;
    // cin >> size;
    // cout << "Enter the elements of the array" <<endl;
    size = 5;
    // for (int i = 0; i < (size) ; i++)
    // {
    //     cin >> arr[i];
    // }

    for (int j = 0; j < size - 1; j++)
    {
        int minIndex = j;
        for (int i = j + 1; i < size; i++)
        {
            if (arr[minIndex] > arr[i])
            {
                minIndex = i;
            }
            // printArray(arr,size);
        }
        swap(arr[minIndex], arr[j]);
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}