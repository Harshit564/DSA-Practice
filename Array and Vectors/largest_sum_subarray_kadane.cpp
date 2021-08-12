#include<iostream>
using namespace std;

// Kadane Algorithm O(N)
void printAllSubArray(int arr[], int n){
    int current_sum = 0;
    int max_sum = 0;
    for(int i = 0; i < n; i++){
        current_sum += arr[i];
        if(current_sum < 0)
            current_sum = 0;
        max_sum = max(current_sum, max_sum);
    }
    cout << max_sum << "\n";
}

int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);

    printAllSubArray(arr, n);
    return 0;
}
