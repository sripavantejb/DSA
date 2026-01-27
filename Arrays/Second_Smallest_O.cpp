#include<bits/stdc++.h>
using namespace std;
 
int second_largest(int arr[], int n) {
    int max = arr[0];
    int second_smallest = -1;
    for(int i=1; i<=n-1; i++){
        if(arr[i]>max){
            second_smallest = max;
            max = arr[i];
        }
        if(arr[i]>second_smallest && arr[i]<max){
            second_smallest = arr[i];
        }
    }
    return second_smallest;
} 
 
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << second_largest(arr, n) << endl;
    return 0;
}