#include <bits/stdc++.h>
using namespace std;

void printArray (int arr[], int count) {

    for (size_t i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

}

void swapAlternate (int arr[], int size) {

    for (int i = 0; i < size; i+=2)
    {
        if (i+1 < size)
        {
            swap(arr[i], arr[i+1]);
        }
        
    }

}

int main () {

    int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
    int odd[5] = {1, 5, 6, 2, 10};

    swapAlternate(even, 8);
    swapAlternate(odd, 5);

    printArray(even, 8);
    printArray(odd, 5);

}