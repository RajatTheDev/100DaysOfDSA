#include <iostream>
using namespace std;

int setBits(int n) {
    int count = 0;
    while (n!=0) {
        if (n&1) {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main() {
    int num1, num2;
    cout << "Enter the values for 1st and 2nd Number: ";
    cin >> num1 >> num2;
    int ans1 = setBits(num1);
    int ans2 = setBits(num2);
    cout << "Set bits of A = " << ans1 << endl;
    cout << "Set bits of B = " << ans2 << endl;
    int ans = ans1 + ans2;
    cout << "Total set bits are = " << ans << endl;
}