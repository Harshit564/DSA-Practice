#include<iostream>
using namespace std;

void printAllSubArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            for(int k = i; k <= j; k++){
                cout << arr[k] << " ";
            }
            cout << "\n";
        }
    }
}

int main(){
    int arr[] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);

    printAllSubArray(arr, n);
    return 0;
}
