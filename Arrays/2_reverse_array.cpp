#include<bits/stdc++.h>
using namespace std;

void reverse_array(int a[], int start, int end){
    while(start < end){
        // swap(a[start++], a[end--]);
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

int main(){
    int a[] = {0,1,2,3,4,5,6,7,8};
    int sz = sizeof(a)/sizeof(a[0]);

    reverse_array(a, 0, sz-1);

    for(int i = 0; i < sz; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}