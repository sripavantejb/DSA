#include <bits/stdc++.h>
using namespace std;

void move_zeroes(int arr[], int n) {
    vector<int> v;

    // Store non-zero elements
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            v.push_back(arr[i]);
        }
    }

    // Copy non-zero elements back
    int j = 0;
    for (auto k : v) {
        arr[j] = k;
        j++;
    }

    // Fill remaining with zeroes
    for (int i = j; i < n; i++) {
        arr[i] = 0;
    }
}

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    move_zeroes(a, n);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
