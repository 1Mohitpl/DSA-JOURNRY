#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of N :" << endl;
    cin >> n;

    // Upper half of the diamond (including the middle line)
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the diamond
    for(int i = n - 2; i >= 0; i--) {
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
