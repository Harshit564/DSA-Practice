#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int s = 0;
    int e = n-1;
    while(s < e){
        swap(arr[s], arr[e]);
        s += 1;
        e -= 1;
    }
}

int main(){
    int arr[] = {10,20,30,40,45,60,70,89};
    int n = sizeof(arr)/sizeof(int);

    cout << "Array before reversing: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";

    reverseArray(arr, n);

    cout << "Array after reversing: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";
    return 0;
}
