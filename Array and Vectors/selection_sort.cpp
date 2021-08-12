#include<iostream>
using namespace std;

void selection_sort(int arr[], int n){
    for(int i = 0; i <= n-2; i++){
        int curr = arr[i];
        int min_pos = i;
        for(int j = i; j < n; j++){
            if(arr[j] < arr[min_pos])
                min_pos = j;
        }
        swap(arr[min_pos], arr[i]);
    }
}

int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    selection_sort(arr,n);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

