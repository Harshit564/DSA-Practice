#include<iostream>
using namespace std;

// Brute force O(N^3)
void printAllSubArray(int arr[], int n){
    int maxi = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int sum = 0;
            for(int k = i; k <= j; k++){
                sum += arr[k];
            }
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

