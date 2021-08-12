#include<iostream>
using namespace std;

// Prefix sum O(N^2)
void printAllSubArray(int arr[], int n){
    // Compute prefix sum array

    int ps[n] = {0};
    ps[0] = arr[0];
    for(int i = 1; i < n; i++){
            ps[i] = ps[i-1] + arr[i];
    }

    int maxi = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int sum = (i > 0) ? ps[j] - ps[i-1] : ps[j];
            maxi = max(sum, maxi);
        }

    }
    cout << maxi;
}

int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);

    printAllSubArray(arr, n);
    return 0;
}
