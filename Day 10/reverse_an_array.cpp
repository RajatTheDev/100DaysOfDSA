#include <iostream>
using namespace std;

// Reversing the array with new array

// void reverseArray (int arr[], int count) {

//     int newArray[5], counter = 0;

//     for (int i = count-1; i >= 0; i--, counter++)
//     {
//         newArray[counter] = arr[i];
//     }

//     for (int i = 0; i < counter; i++)
//     {
//         cout << newArray[i] << " ";
//     }

//     cout << endl;

// }

// Reversing an array using swap function

void reverseArray(int arr[], int size) {

    int start = 0;
    int end = size - 1;

    while (start<=end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    

}

void printArray (int arr[], int size) {

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

}

int main () {

    int arr[5] = {2, 7, 5 ,9, 1};
    int brr[6] = {1, 4, 0, 5, -2, 15};

    reverseArray(arr, 5);
    reverseArray(brr, 6);

    printArray(arr, 5);
    printArray(brr, 6);

    return 0;

}