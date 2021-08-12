#include<iostream>
#include<vector>
using namespace std;

void counting_sort(int arr[], int n){
    int largest = -1;
    for(int i = 0; i < n; i++){
        largest = max(largest, arr[i]);
    }

    // create a frequency vector
    vector<int> freq(largest+1, 0);

    // update the freq vector
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    // put elements back from freq to arr
    int j = 0;
    for(int i = 0; i <= largest; i++){
        while(freq[i] > 0){
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }

}

int main(){
    int arr[] = {3,4,12,15,5,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    counting_sort(arr,n);

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
