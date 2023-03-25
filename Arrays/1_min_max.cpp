// Find Minimum and Maximum element from an Array.

#include<bits/stdc++.h>
using namespace std;

int main() {
    int minimum = INT_MAX, maximum = INT_MIN;
    int arr[] = {8,5,7,6,3,57,856,34,3,63,23};

    int sz = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < sz; i++) {
        minimum = min(minimum, arr[i]);
        maximum = max(maximum, arr[i]);
    }

    cout << "Min: " << minimum << endl;
    cout << "Max: " << maximum << endl;
    
    return 0;
}