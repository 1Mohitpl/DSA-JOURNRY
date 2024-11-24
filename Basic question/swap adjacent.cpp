#include <bits/stdc++.h>
using namespace std;

void swapAdjacent(vector<int>& arr) {
    int N = arr.size();
    for (int i = 0; i < N - 1; i += 2) {  // i value is alwasys increase by 2 place
        swap(arr[i], arr[i + 1]);
    }
}

int main() {
    int N;
    cin >> N;
    
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    swapAdjacent(arr);
    
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}