#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << " Enter the amount of money: " << endl;
    cin >> amount;

    int Rs100, Rs50, Rs20, Rs1;

    switch (1) {
        case 1:
            Rs100 = amount/100;
            cout << Rs100 << " 100 Rs notes are required " << endl;
            amount = amount - (Rs100*100);
        case 2:
            Rs50 = amount/50;
            cout << Rs50 << " 50 Rs notes are required " << endl;
            amount = amount - (Rs50*50);
        case 3:
            Rs20 = amount/20;
            cout << Rs20 << " 20 Rs notes are required " << endl;
            amount = amount - (Rs20*20);
        case 4:
            Rs1 = amount;
            cout << Rs1 << " 1 Rs notes are required " << endl;
            amount = amount - Rs1;
            break;
    }
}