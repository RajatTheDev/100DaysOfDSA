#include <bits/stdc++.h>
using namespace std;

int getMin(int num[], int count) {

    int minimum = INT_MAX;
    for (int i = 0; i < count; i++) {
        minimum = min(minimum, num[i]);
    }
    return minimum;

}

int getMax(int num[], int count) {

    int maximum = INT_MIN;
    for (int i = 0; i < count; i++) {
        maximum = max(maximum, num[i]);
    }
    return maximum;

}

int main() {

    int size;
    cout << "Enter the size of array (size<=100): ";
    cin >> size;

    int num[100];

    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    cout << "Maximum value is: " << getMax(num, size) << endl;
    cout << "Minimum value is: " << getMin(num, size) << endl;

}