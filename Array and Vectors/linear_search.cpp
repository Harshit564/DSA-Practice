#include<iostream>
using namespace std;

int linear_search(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int main(){
    int arr[] = {2,21,65,32,78,43,21,5,67,34,29,20};
    int key = 5;
    int n = sizeof(arr)/sizeof(int);
    int index = linear_search(arr, n, key);

    if(index != -1)
        cout << "Key found on index " << index << "\n";
    else
        cout << "Key not found" << "\n";
    return 0;
}
